#pragma once

#ifndef PJCPROJECT_BUTTON_HPP
#define PJCPROJECT_BUTTON_HPP

#include <SFML/Graphics.hpp>

class Button {
private:
	bool isClicked;
	float posX, posY;
	sf::RectangleShape butInner;
	sf::RectangleShape butShape;
	sf::Text butTex;
	sf::Color butColor;
	sf::Font butFont;

public:
	Button(std::string msg, float posX, float posY);
	bool isPressed();
	void update(const sf::Vector2f& mousePos);
	void draw(sf::RenderWindow &window);
};


#endif //PJCPROJECT_BUTTON_HPP
