#pragma once

#ifndef PJCPROJECT_BALOOB_HPP
#define PJCPROJECT_BALOOB_HPP

#include "SFML/Graphics.hpp"
#include <vector>
#include <string>
#include "Generator.hpp"

class Baloob {
private:
	sf::Text theBloob;
	std::string word;
	float speed;

public:
	Baloob(const std::string& word, float speed);
	void update();
};


#endif //PJCPROJECT_BALOOB_HPP
