#pragma once

#ifndef PJCPROJECT_BUTTON_HPP
#define PJCPROJECT_BUTTON_HPP

#include <SFML/Graphics.hpp>

class Button {
private:
	bool isClicked;
	float posX, posY;
	float sizeX, sizeY;
	sf::RectangleShape butInner;
	sf::RectangleShape butShape;
	sf::Text butTex;
	sf::Color butColor;
	sf::Color prsdColor;
	sf::Font butFont;

public:
	Button(std::string msg, float posX, float posY);
	Button(const std::string& msg, float posX, float posY , float sizeX ,float sizeY);
	bool isPressed();
	void update(const sf::Vector2f& mousePos);
	void draw(sf::RenderWindow &window);
};


#endif //PJCPROJECT_BUTTON_HPP
