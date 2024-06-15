#pragma once

#ifndef PJCPROJECT_MENU_HPP
#define PJCPROJECT_MENU_HPP

#include "Button.hpp"
#include "SFML/Graphics.hpp"


class Menu {
private:


public:
	Button butNew;
	Button butLoad;
	Button butOptions;
	Button butExit;
	Menu();
	Button* getButNew();
	Button* getButLoad();
	Button* getButOptions();
};


#endif //PJCPROJECT_MENU_HPP
