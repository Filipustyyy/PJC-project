#include "Game.hpp"

Game::Game() :
	pauseResume("Resume", 865, 500),
	pauseExit("Exit", 865, 700){
	inputText.setPosition(100, 950);
	inputText.setCharacterSize(50);
	textField.setSize(sf::Vector2f(800, 100), 1);
	textField.setPosition(80, 925);
	textField.setFillColor(sf::Color::Black);
	inputText.setString("playerInput");
}

void Game::gameStart(const Difficulty &diff, const int &fnt) {
	isPaused = false;
	gameDiff = diff;
	if (fnt == 2) {
		blobFont.loadFromFile(".\\monkeyvault\\fonts\\Muli.ttf");
	} else {
		blobFont.loadFromFile(".\\monkeyvault\\fonts\\CourierPrime.ttf");
	}
	inputText.setFont(blobFont);

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

void Game::spawnBaloob() {

}

void Game::inputter(const std::string &input) {
	playerInput = input;
}

void Game::update(sf::RenderWindow &window, const sf::Vector2f& mousePos) {
	inputText.setString(playerInput);

	for (auto& word : baloobers){
		word.update();
		if (word.theBloob.getPosition().x >= 1925)
			baloobers.pop_front();
	}

	pauseResume.update(mousePos);
	pauseExit.update(mousePos);
}

void Game::draw(sf::RenderWindow &window) {
	if (isPaused) {
		pauseResume.draw(window);
		pauseExit.draw(window);
	} else {
		window.draw(textField);
		window.draw(inputText);

		for (auto& word : baloobers){
			word.update();
			if (word.theBloob.getPosition().x >= 1100)
				baloobers.pop_front();
		}

		baloobers.erase(std::remove_if(baloobers.begin(), baloobers.end(),
	   [](const Baloob& word){ return word.theBloob.getPosition().x > 600; }),
		baloobers.end());
	}
}


void Game::saveGame() {

}

void Game::loadGame() {

}

Button *Game::getButRes() {
	Button* ptr = &pauseResume;
	return ptr;
}

Button *Game::getButExit() {
	Button* ptr = &pauseExit;
	return ptr;
}
