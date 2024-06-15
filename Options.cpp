#include "Options.hpp"

Options::Options():
	diffEasy("Easy", 50, 50),
	diffNorm("Normal", 50, 50),
	diffHard("Hard", 50, 50),
	butFont1("CourierPrime", 50, 50),
	butFont2("Muli", 50, 50){
	font1.loadFromFile(".\\monkeyvault\\fonts\\CourierPrime.ttf");
	font2.loadFromFile(".\\monkeyvault\\fonts\\Muli.ttf");
	sf::Font* selectedFont = &font1;
	selectedDiff = Difficulty::NRMAL;
}

sf::Font Options::getFont() {
	return *selectedFont;
}

Difficulty Options::getDiff() {
	return selectedDiff;
}

void Options::update() {

}

void Options::draw(sf::RenderWindow &window) {
//	window.draw(diffEasy);
}

Button *Options::getButEasy() {
	Button* ptr = &diffEasy;
	return ptr;
}

Button *Options::getButNorm() {
	Button* ptr = &diffNorm;
	return ptr;
}

Button *Options::getButHard() {
	Button* ptr = &diffHard;
	return ptr;
}

Button *Options::getButFont1() {
	Button* ptr = &butFont1;
	return ptr;
}

Button *Options::getButFont2() {
	Button* ptr = &butFont2;
	return ptr;
}

