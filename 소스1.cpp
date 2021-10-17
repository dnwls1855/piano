//void bangtal::Sound::setOnSoundCallback(std::function< bool(SoundPtr)> 	callback);
//void setOnMouseCallback(std::function< bool(ObjectPtr, int, int, MouseAction)> callback);

//void bangtal::Object::setOnMouseCallback(std::function< bool(ObjectPtr, int, int, MouseAction)> 	callback)


/*auto _do = Sound::create("Sounds/도.m4a");
auto ob = Object::create("Images/제발.png", Scene, 300, 300);
ob->setOnMouseCallback([&](auto ob, auto x, auto y, auto action)->bool {
	auto _do = Sound::create("Sounds/도.m4a");
	Sound::play(false);
	});
_do->setOnSoundCallback([&](auto _do)->bool {
	return true;
	});*/