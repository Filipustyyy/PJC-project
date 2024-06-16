#include "Menu.hpp"

Menu::Menu():
	butNew("New Game", 690, 550),
	butLoad("Load Game", 980, 550),
	butOptions("Options", 835, 750),
	butExit("Exit", 1600, 880){

}

void Menu::update(const sf::Vector2f& mousePos) {
	butNew.update(mousePos);
	butLoad.update(mousePos);
	butOptions.update(mousePos);
	butExit.update(mousePos);
}

void Menu::draw(sf::RenderWindow &window) {
	butNew.draw(window);
	butLoad.draw(window);
	butOptions.draw(window);
	butExit.draw(window);
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

Button *Menu::getButExit() {
	Button* ptr = &butExit;
	return ptr;
}
