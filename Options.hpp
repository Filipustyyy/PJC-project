#pragma once

#ifndef PJCPROJECT_OPTIONS_HPP
#define PJCPROJECT_OPTIONS_HPP

#include "SFML/Graphics.hpp"
#include "Button.hpp"

enum class Difficulty {
	EZ, NRMAL, HARD
};

class Options {
private:
	Difficulty selectedDiff;
	sf::Font* selectedFont;
	sf::Font font1;
	sf::Font font2;
	Button diffEasy;
	Button diffNorm;
	Button diffHard;
	Button butFont1;
	Button butFont2;


public:
	Options();
	sf::Font getFont();
	Difficulty getDiff();
	void update();
	void draw(sf::RenderWindow &window);
	Button* getButEasy();
	Button* getButNorm();
	Button* getButHard();
	Button* getButFont1();
	Button* getButFont2();
};




#endif //PJCPROJECT_OPTIONS_HPP
