#include <iostream>
#include "Button.hpp"

Button::Button(std::string msg, float posX, float posY) {
	isClicked = false;
	butFont.loadFromFile(".\\monkeyvault\\fonts\\CourierPrime.ttf");
	butTex = sf::Text(msg, butFont);
	butShape = sf::RectangleShape(sf::Vector2f(250, 150));
	butShape.setPosition(posX, posY);
	butShape.setFillColor(sf::Color::Black);
	butInner = sf::RectangleShape(sf::Vector2f (230, 130));
	butInner.setPosition(posX + 10, posY + 10);
	butInner.setFillColor(sf::Color(20, 60, 30));
	butTex.setOrigin(butTex.getGlobalBounds().getSize() / 2.f + butTex.getLocalBounds().getPosition());
	butTex.setPosition(posX + 125, posY + 75);
}

bool Button::isPressed() {
	return isClicked;
}

void Button::update(const sf::Vector2f& mousePos) {
	if(isClicked) {
		isClicked = false;
	} else {
		if (butShape.getGlobalBounds().contains(mousePos)) {
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				isClicked = true;
			else isClicked = false;
		}
	}
}

void Button::draw(sf::RenderWindow &window) {
	window.draw(butShape);
	window.draw(butInner);
	window.draw(butTex);
}
