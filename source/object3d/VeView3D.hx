package object3d;

import away3d.cameras.Camera3D;
import away3d.containers.Scene3D;
import away3d.containers.View3D;
import away3d.core.render.DefaultRenderer;
import away3d.core.render.RendererBase;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxFrame.FlxFrameAngle;
import openfl.display.BitmapData;
import openfl.display.PNGEncoderOptions;
import openfl.events.Event;
import openfl.geom.Rectangle;
import openfl.utils.ByteArray;
#if lime
import sys.io.File;
#end

class VeView3D extends FlxSprite
{
	public static var viewSprites = new Array<VeView3D>();

	// 2d
	public var bmd:BitmapData = null;

	public static var initialized = false;
	public static var renderScale:Float;
	public static var renderDescale:Float;

	/* public static var save:Int = 30;
		public static var drawdebug:Int = 30; */
	// 3d
	public var view3d:Null<View3D> = null;

	/**
		Resizing stuff currently isn't fully visually reliable but that's not the bug we're investigating rn
	**/
	static function resizeFunc(?evt:Null<Event> = null)
	{
		renderScale = FlxG.scaleMode.gameSize.x / FlxG.width;
		renderDescale = FlxG.width / FlxG.scaleMode.gameSize.x;
		for (thing in viewSprites)
		{
			thing.updateViewSize();
		}
	}

	public function new()
	{
		// if (view3d != null && FlxG.game.contains(view3d))
		//	FlxG.game.removeChild(view3d);
		view3d = new View3D();
		viewSprites.push(this);
		if (!initialized)
		{
			FlxG.stage.addEventListener(Event.RESIZE, resizeFunc);
			resizeFunc();
			initialized = true;
		}
		else
		{
			updateViewSize();
		}
		FlxG.addChildBelowMouse(view3d);
		super();
		width = FlxG.width;
		height = FlxG.height;
	}

	function updateViewSize()
	{
		if (bmd != null)
		{
			bmd.disposeImage();
			bmd.dispose();
		}
		bmd = new BitmapData(Math.ceil(FlxG.scaleMode.gameSize.x), Math.ceil(FlxG.scaleMode.gameSize.y));
		view3d.width = bmd.width;
		view3d.height = bmd.height;
		trace('3D view update - Descale: ${renderDescale} - 3D Resolution: ${bmd.width} x ${bmd.height}');
		/*bmd = new BitmapData(Math.ceil(FlxG.width * 2), Math.ceil(FlxG.height * 2));
			view3d.width = bmd.width;
			view3d.height = bmd.height;
			renderScale = bmd.width / FlxG.width;
			renderDescale = FlxG.width / bmd.width;
			trace("Resize Callback for 3D view - Descale: " + renderDescale + " - 3D Resolution: " + bmd.width + "x" + bmd.height); */
	}

	public override function destroy()
	{
		trace("Starting disposing 3d view");
		viewSprites.remove(this);
		if (view3d != null && FlxG.game.contains(view3d))
			FlxG.game.removeChild(view3d);
		view3d.dispose();
		view3d = null;
		super.destroy();
		trace("Finished disposing 3d view");
	}

	override public function draw():Void
	{
		// drawdebug -= 1;
		// if (drawdebug == 0)
		// trace("try draw");
		for (camera in cameras)
		{
			// if (drawdebug == 0)
			// trace("camera loop");
			if (!camera.visible || !camera.exists)
				continue;

			drawComplex(camera);

			#if FLX_DEBUG
			FlxBasic.visibleCount++;
			#end
		}

		#if FLX_DEBUG
		if (FlxG.debugger.drawDebug)
			drawDebug();
		#end

		// if (drawdebug == 0)
		//	drawdebug = 30;
	}

	override function drawComplex(camera:FlxCamera):Void
	{
		// if (drawdebug == 0)
		//	trace("draw complex");
		view3d.renderer.queueSnapshot(bmd);
		view3d.render();

		_frame = FlxG.bitmap.add(bmd, false, "Ve_3D_View").imageFrame.frames[0];
		/*if (save > 0) {
			save -= 1;
			if (save % 10 == 0) {
				trace("will save in " + save + " frames");
			}
			if (save == 0) {
				trace("saving now");
				var a = _frame.parent.bitmap;
				var b = new ByteArray();
				a.encode(new Rectangle(0, 0, a.width, a.height), new PNGEncoderOptions(), b);
				File.saveBytes("3d_image.png", b);
			}
		}*/

		_frame.prepareMatrix(_matrix, FlxFrameAngle.ANGLE_0, checkFlipX(), checkFlipY());
		_matrix.translate(-origin.x, -origin.y);
		_matrix.scale(scale.x, scale.y);

		if (bakedRotationAngle <= 0)
		{
			updateTrig();

			if (angle != 0)
				_matrix.rotateWithTrig(_cosAngle, _sinAngle);
		}

		getScreenPosition(_point, camera).subtractPoint(offset);
		_point.add(origin.x, origin.y);
		_matrix.translate(_point.x, _point.y);
		_matrix.scale(renderDescale, renderDescale);

		if (isPixelPerfectRender(camera))
		{
			_matrix.tx = Math.floor(_matrix.tx);
			_matrix.ty = Math.floor(_matrix.ty);
		}

		camera.drawPixels(_frame, framePixels, _matrix, colorTransform, blend, antialiasing, shader);
	}
}
