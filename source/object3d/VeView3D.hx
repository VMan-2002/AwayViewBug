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
	public var graphicId:String;
	public var pixelScale(default, set):Float = 1.0;
	public var shouldResize:Bool = false;

	var myDescale:Float = 1.0;

	public static var canDoResize:Bool = true;

	public static var initialized = false;
	public static var renderScale:Float;
	public static var renderDescale:Float;

	// 3d
	public var view3d:Null<View3D> = null;

	/**
		Resizing stuff currently isn't fully visually reliable we're investigating rn
	**/
	// static function resizeFunc(?evt:Null<Event> = null)

	static function resizeFunc(?width:Int = -1, ?height:Int = -1)
	{
		if (width == -1)
			width = Math.floor(FlxG.scaleMode.gameSize.x);
		if (height == -1)
			height = Math.floor(FlxG.scaleMode.gameSize.y);

		trace('Window size changed to ${width} x ${height}');
		trace('Game display size changed to ${FlxG.scaleMode.gameSize.x} x ${FlxG.scaleMode.gameSize.y}');
		renderScale = FlxG.scaleMode.gameSize.x / FlxG.width;
		renderDescale = FlxG.width / FlxG.scaleMode.gameSize.x;
		for (thing in viewSprites)
		{
			// thing.updateViewSize();
			thing.shouldResize = true;
		}
	}

	public function new()
	{
		var idNum = 0;
		do
		{
			graphicId = "Ve_3D_View" + idNum;
			for (thing in viewSprites)
			{
				if (thing.graphicId == graphicId)
				{
					idNum += 1;
					break;
				}
			}
		}
		while (graphicId != "Ve_3D_View" + idNum);
			// if (view3d != null && FlxG.game.contains(view3d))
			//	FlxG.game.removeChild(view3d);
		view3d = new View3D();
		viewSprites.push(this);
		if (!initialized)
		{
			FlxG.stage.addEventListener(Event.RESIZE, function(_) if (canDoResize)
				resizeFunc(), false, -200);
			// FlxG.signals.gameResized.add(resizeFunc);
			resizeFunc();
			initialized = true;
		}
		else
		{
			updateViewSize();
		}
		FlxG.addChildBelowMouse(view3d);
		view3d.alpha = 0;
		super();
		width = FlxG.width;
		height = FlxG.height;
	}

	function updateViewSize()
	{
		FlxG.bitmap.removeByKey(graphicId);
		if (bmd != null)
		{
			bmd.disposeImage();
			bmd.dispose();
		}
		bmd = new BitmapData(Math.ceil(FlxG.scaleMode.gameSize.x / pixelScale), Math.ceil(FlxG.scaleMode.gameSize.y / pixelScale));
		view3d.width = bmd.width;
		view3d.height = bmd.height;
		// view3d.
		myDescale = renderDescale * pixelScale;
		trace('3D view update - Descale: ${myDescale} - 3D Resolution: ${bmd.width} x ${bmd.height}');
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

	public override function update(elapsed:Float)
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.P)
		{
			trace("saving now");
			// var screenshotBmd = new BitmapData(Math.ceil(view3d.width), Math.ceil(view3d.height), true);
			var screenshotBmd = bmd;
			view3d.renderer.queueSnapshot(screenshotBmd);
			view3d.render();
			var b = new ByteArray();
			screenshotBmd.encode(new Rectangle(0, 0, screenshotBmd.width, screenshotBmd.height), new PNGEncoderOptions(), b);
			File.saveBytes("3d_image.png", b);
		}
		if (FlxG.keys.justPressed.O)
			resizeFunc();
		if (FlxG.keys.justPressed.U)
		{
			canDoResize = !canDoResize;
			trace(canDoResize ? "Auto view resize now on" : "Auto view resize now off");
		}
	}

	override public function draw():Void
	{
		if (shouldResize)
		{
			shouldResize = false;
			updateViewSize();
		}
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

		_frame = FlxG.bitmap.add(bmd, false, graphicId).imageFrame.frames[0];
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
		_matrix.scale(myDescale, myDescale);

		if (isPixelPerfectRender(camera))
		{
			_matrix.tx = Math.floor(_matrix.tx);
			_matrix.ty = Math.floor(_matrix.ty);
		}

		camera.drawPixels(_frame, framePixels, _matrix, colorTransform, blend, antialiasing, shader);
	}

	function set_pixelScale(value)
	{
		pixelScale = value;
		updateViewSize();
		return value;
	}
}
