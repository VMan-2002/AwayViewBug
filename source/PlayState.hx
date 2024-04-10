package;

import flixel.FlxG;
import flixel.FlxSprite;

class PlayState extends StateBase
{
	override public function create()
	{
		super.create();
		add(new FlxSprite(0, 0, "assets/images/simpleGraphic.png"));
		addHintText();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.C)
		{
			trace("Switching to 3D state");
			FlxG.switchState(new AwayViewBugState());
		}
	}
}
