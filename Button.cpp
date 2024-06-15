#include "Button.hpp"

Button::Button(std::string msg, float posX, float posY) {
	isClicked = false;
	butFont.loadFromFile(".\\monkeyvault\\fonts\\CourierPrime.ttf");
	butTex = sf::Text(msg, butFont);
	butShape = sf::RectangleShape(sf::Vector2f(200, 150));
	butShape.setPosition(posX, posY);
	butShape.setFillColor(sf::Color::Black);
	butInner = sf::RectangleShape(sf::Vector2f (190, 140));
	butInner.setPosition(posX - 5, posY - 5);
	butInner.setFillColor(sf::Color::Cyan);
}

Button::Button(const std::string& msg, float posX, float posY, float sizeX, float sizeY) {
	isClicked = false;
	butFont.loadFromFile(".\\monkeyvault\\fonts\\CourierPrime.ttf");
	butTex = sf::Text(msg, butFont);
	butShape = sf::RectangleShape(sf::Vector2f(sizeX, sizeY));
	butShape.setPosition(posX, posY);
	butShape.setFillColor(sf::Color::Black);
	butInner = sf::RectangleShape(sf::Vector2f (sizeX - 10, sizeY - 10));
	butInner.setFillColor(sf::Color::Cyan);
}

bool Button::isPressed() {
	return isClicked;
}

void Button::update(const sf::Vector2f& mousePos) {
	if (butShape.getGlobalBounds().contains(mousePos)) {
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			isClicked = true;
	}

}

void Button::draw(sf::RenderWindow &window) {
	window.draw(butShape);
	window.draw(butInner);
	window.draw(butTex);
}
