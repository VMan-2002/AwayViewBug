package;

import flixel.FlxState;
import flixel.text.FlxText;

class StateBase extends FlxState
{
	public function addHintText()
	{
		var text = new FlxText(0, 0, 0, "Press X: 2D State\nPress C: 3D State\n\nDispose is called when attempting to move from the 3D state to the 2D state.");
		add(text);
	}
}
