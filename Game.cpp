//
// Created by filip on 6/9/24.
//

#include "Game.hpp"

Game::Game() {
	isGame = false;
}

void Game::gameStart(const Difficulty &diff) {
	gameDiff = diff;
	switch (gameDiff) {
		case Difficulty::EZ:
			lives = 3;
			gameSpeed = 1;
			break;
		case Difficulty::NRMAL:
			lives = 2;
			gameSpeed = 1.5;
			break;
		case Difficulty::HARD:
			lives = 1;
			gameSpeed = 2;
			break;
	}

}

void Game::update() {

}

void Game::draw() {

}

void Game::saveGame() {

}

void Game::loadGame() {

}
