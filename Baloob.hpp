#pragma once

#ifndef PJCPROJECT_BALOOB_HPP
#define PJCPROJECT_BALOOB_HPP

#include "SFML/Graphics.hpp"
#include <vector>
#include <string>

class Baloob {
private:
	sf::Font font;
	std::string word;
	float speed;

public:
	Baloob(const std::string& word, sf::Font fnt, float speed);
	std::string getWord();
	void update();
	void draw(sf::RenderWindow &window);
	sf::Text theBloob;
};


#endif //PJCPROJECT_BALOOB_HPP
