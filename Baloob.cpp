#include "Baloob.hpp"


Baloob::Baloob(const std::string& word, sf::Font fnt, float speed) {
	theBloob = sf::Text(word, fnt);
	theBloob.setString(word);
	this -> speed = speed;
}

std::string Baloob::getWord() {
	return word;
}


void Baloob::update() {
	theBloob.move(0, speed);
}

void Baloob::draw(sf::RenderWindow &window) {
	window.draw(theBloob);
}

