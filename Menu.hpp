#pragma once

#ifndef PJCPROJECT_MENU_HPP
#define PJCPROJECT_MENU_HPP

#include "Button.hpp"
#include "SFML/Graphics.hpp"


class Menu {
private:
	Button butNew;
	Button butLoad;
	Button butOptions;
	Button butExit;

public:
	Menu();
	void update(const sf::Vector2f& mousePos);
	void draw(sf::RenderWindow &window);
	Button* getButNew();
	Button* getButLoad();
	Button* getButOptions();
	Button* getButExit();
};


#endif //PJCPROJECT_MENU_HPP
