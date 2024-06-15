#include "Baloob.hpp"


Baloob::Baloob(const std::string& word, float speed) {
	theBloob.setString(word);
	this -> speed = speed;
}

void Baloob::update() {
	theBloob.move(0, speed);
}
