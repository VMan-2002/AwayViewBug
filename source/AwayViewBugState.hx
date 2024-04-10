package;

import away3d.controllers.HoverController;
import away3d.entities.Mesh;
import away3d.lights.DirectionalLight;
import away3d.materials.lightpickers.StaticLightPicker;
import away3d.primitives.CubeGeometry;
import flixel.FlxG;
import flixel.text.FlxText;
import object3d.VeView3D;
import openfl.geom.Vector3D;

class AwayViewBugState extends StateBase
{
	var _cameraController:HoverController;
	var _light:DirectionalLight;
	var _lightPicker:StaticLightPicker;

	var veView:VeView3D;

	override public function create()
	{
		super.create();

		add(new FlxText(0, FlxG.height - 40, 0, "(this text behind other objects)"));

		veView = new VeView3D();
		add(veView);

		// setup the view
		var _view = veView.view3d;

		// setup the camera for optimal shadow rendering
		_view.camera.lens.far = 2100;

		// setup controller to be used on the camera
		_cameraController = new HoverController(_view.camera, null, 45, 20, 1000, 10);

		// setup the lights for the scene
		_light = new DirectionalLight(-1, -1, 1);
		_direction = new Vector3D(-1, -1, 1);
		_lightPicker = new StaticLightPicker([_light]);
		_view.scene.addChild(_light);

		// uhh real testing this time
		var testobject = new Mesh(new CubeGeometry(500, 500, 500, 4, 4, 4, false));
		_view.scene.addChild(testobject);

		add(new FlxText(0, FlxG.height - 20, 0, "Test 3D"));

		addHintText();
	}

	private var _direction:Vector3D;
	var mousestartX:Float;
	var mousestartY:Float;
	private var _lastPanAngle:Float;
	private var _lastTiltAngle:Float;
	var rotTime:Float = 0;

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.mouse.pressed)
		{
			if (FlxG.mouse.justPressed)
			{
				_lastPanAngle = _cameraController.panAngle;
				_lastTiltAngle = _cameraController.tiltAngle;
				mousestartX = FlxG.mouse.x;
				mousestartY = FlxG.mouse.y;
			}
			_cameraController.panAngle = 0.3 * (FlxG.mouse.x - mousestartX) + _lastPanAngle;
			_cameraController.tiltAngle = 0.3 * (FlxG.mouse.y - mousestartY) + _lastTiltAngle;
		}
		else
		{
			_cameraController.panAngle += elapsed * 3;
		}

		rotTime += elapsed;
		_direction.x = -Math.sin(rotTime / 4);
		_direction.z = -Math.cos(rotTime / 4);
		_light.direction = _direction;

		if (FlxG.keys.justPressed.X)
		{
			trace("Switching to 2D state");
			FlxG.switchState(new PlayState());
		}
	}
}
