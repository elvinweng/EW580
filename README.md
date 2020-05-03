# Eye Tracking Shooting Practice

## Video: https://www.youtube.com/watch?v=zrig3BLL86E

## Description:
The eye-tracking shooting practice is a first-person shooting practice game with the Tobii eye-tracking technique. The game is for those kids who are not a vision disorder but may have a disability with another part of their body, and it only requires the player's eye and the left-click of mice for essential play. There will be a circle that currently shows the location of the player's eye looks at the screen.  When the player aims at any place near to the bottles, the game will automatically lock the target for the player, and all player needs to do is left-click the mick to fire. The game also includes a magic spell and grenade, and both magic spells and grenades require another key than the left-click of mick to cast.

## Intended Audience:
Kids who are not a vision disorder but may have a disability with another part of their body.

## Main Technologies:
The Tobii eye-tracking
Unreal Engine 4

## Libraries:
Tobii Unreal Engine SDK

## Development log
The Tobii Unreal Engine SDK actually doesn't work on the newest Unreal Engine 4.24 in my case. I was trying to use the Tobii Unreal Engine SDK on Unreal Engine 4.24 at the very beginning, and it doesn't work properly, so I have to keep lower my Unreal Engine version until I finally got it to work on Unreal Engine 4.22. The first step of the project was to create a new project on Unreal Engine, and after that, I was trying to work on the character first, but the character can't be tested without a complete scene. Therefore, scene first, then character, lastly, other items on the scene. The majority of the material of this project directly came from the Tobii Unreal Engine SDK, and this also causes the biggest problem while I was working on the project. Since this is my first-time use Unreal Engine, and also directly use materials from the SDK, it took me a long time to study the framework. I spent most of my time working on replacing the target item (bottle in this game) to something else, but unfortunately, it still ends with failure because of the framework of the game. The white target circle used the gaze trace from the Tobii eye-tracking core software. Lastly, the scoreboard of the game, I was able to make the score adds up by when the player left-clicks the mice or press the key the players use to case magic spell and grenade. But honestly, this is definitely not the right way to do scoreboard, since if a shot misses the target, the score still adds up. Therefore, I remove that scoreboard and still trying to work on a new scoreboard that able to add score up when a target is destroyed. Again, I don't think I'm ready to finish that scoreboard before the project due day because of the bottle refresh problem.

## Problems and Future Work:
Target item replacement & Scoreboard

## To get started:

### Prerequisites:
Tobii Unreal Engine SDK requires the following setup on your computer:

* Unreal Engine 4.21 or later
* Windows 10, 8.1, or 7
* Target build platform Windows32/64
* Tobii Eye Tracking Core Software (either downloaded install bundle for peripheral eye tracker, or pre-installed on integrated systems)
* Tobii consumer eye tracker peripheral or built-in device.

### Download the zip from https://github.com/elvinweng/EW580/

### Add the Plugin to your Project:
Unzip the zip into the Plugins folder in your project. The uplugin file should be located here:

	MyProject/Plugins/TobiiEyetracking/TobiiEyetracking.uplugin

Launch your project again and follow the prompts from there to get to the samples and try out some 
eyetracked interactions!

**Have Fun!**
