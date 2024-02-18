#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
#include <list>
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>

using namespace geode::prelude;

class $modify(MenuLayer) {
	bool init() {
		if (!MenuLayer::init())
			return false;

		//Seed the number generator using the current time
		std::srand(static_cast<unsigned int>(std::time(nullptr)));

		// Create a list of splash texts
		std::vector<std::string> splashTexts = {
			"Now with more bugs!",
			"42069",
			"No thoughts. Head empty.",
			"My advice? Spam.",
			"Back for more, eh?",
			"Pro tip: Click!",
			"*insert lenny face*",
			"Life.",
			"Geometry Dash? How about Shape Run?",
			"beat avernus you noob",
			"Got demons?",
			"Splash text: Not ripped from Minecraft!",
			"Play, die, rage, quit, repeat.",
			"you are f*ck map",
			"top comment is gay",
			"Anyone got ideas for splash text?",
			"splashText->setRoast('your mom');",
			"Thou mother",
			"And then there's Chunky! He's dead.",
			"New best!",
			"Now showing: Sonic Wave 98%",
			"Update 2.3 coming 2069!",
			"cmake --build build --config RelWithDebInfo",
			"How many splash texts? I dunno, I didn't count.",
			"You downloaded this mod? holy moly guacamole",
			"check steam",
			"One discord message caused such a riot.",
			"Remember 2.1? Me neither.",
			":wave_emoji: RATE TIDAL WAVE :wave_emoji:",
			"Next artist reveal: DJRubRub!",
			"Random Song 06 is currently not playing.",
			"3 2 1 geometry dash *fire beat drop*",
			"Fire in the hole",
			"Fire in the hole isn't funny",
			"I've been writing these for the past 10 minutes",
			"911? Yes, this person sucks at GD.",
			"Deleting System32...",
			"I loooove gd cologne",
			"remember to HIT SUBSCRIBE BABY YEAAAHHH",
			"Good morning, good evening, and good afternoon!",
			"Doors is dead",
			"I'm looking at my pet gerbils as of writing this.",
			"Let's get ready to rumble",
			"Back for more, eh?",
			"They don't know I beat Back on Track.",
			"I prefer C Sharp over C++. It's simpler.",
			"Lua, anyone?",
			"I have a pet gerbil named 'Noodles'",
			"I have a pet guinea pig named 'Whiskers'",
			"I have a pet mouse named 'Timmy'",
			"*insert vsauce theme song here*",
			"Anyone want a KitKat?",
			"I'm Canadian. It's not snowy.",
			"Do not underestimate AI.",
			"There is more splash text than actual code",
			"Geometry Dashin",
			"Tienes 14? Activa cam",
			"Worlds smallest violin, really needs an audience",
			"lifelocked",
			"yessir",
			"hello SanekGamer007",
		};

		// Generate a random index
		int randomIndex = std::rand() % splashTexts.size();

		//Access the text with the index
		std::string selectedSplashText = splashTexts[randomIndex];
		const char* converted = selectedSplashText.c_str();

		auto label = CCLabelBMFont::create(converted, "bigFont.fnt");
		label->setPosition(350.f, 240.f);
		label->setScale(0.5);
		this->addChild(label);

		return true;
	}
};
