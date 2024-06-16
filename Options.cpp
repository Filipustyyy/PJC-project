#include "Options.hpp"

Options::Options():
	diffEasy("Easy", 555, 500),
	diffNorm("Normal", 835, 500),
	diffHard("Hard", 1115, 500),
	butFont1("CourierPrime", 695, 700),
	butFont2("Muli", 975, 700),
	butBack("Back", 835, 880){
	font1.loadFromFile(".\\monkeyvault\\fonts\\CourierPrime.ttf");
	font2.loadFromFile(".\\monkeyvault\\fonts\\Muli.ttf");
	selectedFont = 1;
	selectedDiff = Difficulty::NRMAL;
	optionsTitle.setString("Options");
	optionsTitle.setPosition(700, 250);
	optionsTitle.setCharacterSize(120);
}

int Options::getFont() {
	return selectedFont;
}

Difficulty Options::getDiff() {
	return selectedDiff;
}

void Options::update(const sf::Vector2f& mousePos) {
	diffEasy.update(mousePos);
	diffNorm.update(mousePos);
	diffHard.update(mousePos);
	butFont1.update(mousePos);
	butFont2.update(mousePos);
	butBack.update(mousePos);
	if (selectedFont == 2)
		optionsTitle.setFont(font2);
	else
		optionsTitle.setFont(font1);
}

void Options::draw(sf::RenderWindow &window) {
	diffEasy.draw(window);
	diffNorm.draw(window);
	diffHard.draw(window);
	butFont1.draw(window);
	butFont2.draw(window);
	butBack.draw(window);
	window.draw(optionsTitle);
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

Button *Options::getButBack() {
	Button* ptr = &butBack;
	return ptr;
}

void Options::setDiff(Difficulty diff) {
	selectedDiff = diff;
}

void Options::setFont(const int &which) {
	selectedFont = which;
}

