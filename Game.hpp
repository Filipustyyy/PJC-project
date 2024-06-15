#pragma once

#ifndef PJCPROJECT_GAME_HPP
#define PJCPROJECT_GAME_HPP

#include "Baloob.hpp"
#include "Options.hpp"

class Game {
private:
	std::vector<Baloob> baloobers;
	std::string currentInput;
	float spawnTimer;
	float spawnFreq;
	Difficulty gameDiff;
	int lives;
	float gameSpeed;
	bool isGame;

public:
	Game();
	void gameStart(const Difficulty &diff);
	void update();
	void draw();
	void saveGame();
	void loadGame();
};


#endif //PJCPROJECT_GAME_HPP
