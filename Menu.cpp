#include "Menu.hpp"

Menu::Menu():
	butNew("New Game", 50, 50),
	butLoad("Load Game", 50, 50),
	butOptions("Options", 50, 50),
	butExit("Exit", 50, 50){

}

Button *Menu::getButNew() {
	Button* ptr = &butNew;
	return ptr;
}

Button *Menu::getButLoad() {
	Button* ptr = &butLoad;
	return ptr;
}

Button *Menu::getButOptions() {
	Button* ptr = &butOptions;
	return ptr;
}
