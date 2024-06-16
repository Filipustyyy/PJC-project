#pragma once

#ifndef PJCPROJECT_GAME_HPP
#define PJCPROJECT_GAME_HPP

#include <deque>
#include "Baloob.hpp"
#include "Options.hpp"
#include "Generator.hpp"

class Game {
private:
	std::deque<Baloob> baloobers;
	std::string playerInput;
	sf::Text inputText;
	sf::RectangleShape textField;
	float spawnTimer;
	float spawnFreq;
	sf::Clock cock;
	sf::Event event;
	Difficulty gameDiff;
	int lives;
	float gameSpeed;
	bool isGame;
	sf::Font blobFont;
	Button pauseResume;
	Button pauseExit;


public:
	Game();
	void gameStart(const Difficulty &diff, const int &fnt);
	void spawnBaloob();
	void inputter(const std::string &input);
	void update(sf::RenderWindow &window, const sf::Vector2f& mousePos);
	void draw(sf::RenderWindow &window);
	void saveGame();
	void loadGame();
	bool isPaused;
	Button* getButRes();
	Button* getButExit();
};


#endif //PJCPROJECT_GAME_HPP
