#include "Options.hpp"
#include "Generator.hpp"
#include "Menu.hpp"
#include "Game.hpp"

enum class CurrState {
	GAME, OPTIONS, MENU
};

auto main() -> int {
	auto window = sf::RenderWindow(
			sf::VideoMode({1920, 1080}),
			"Primate typing education software", sf::Style::Close
			);
	auto event = sf::Event();
	window.setFramerateLimit(30);

	Menu menu = Menu();
	Options options = Options();
	Generator wordGen = Generator();
	Game game = Game();
	CurrState state = CurrState::MENU;

//	bool isGame, isPaused, isOptions = false;
	sf::Font titleFont;
	titleFont.loadFromFile(".\\monkeyvault\\fonts\\CuteDino.otf");
	sf::Text gameTitle = sf::Text("Primate educator", titleFont);
	gameTitle.setPosition(560, 300);
	gameTitle.setScale(3, 3);
	std::string playerInput;

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (state == CurrState::GAME) {
				if (event.type == sf::Event::KeyPressed) {
					if (event.key.code == sf::Keyboard::Escape) {
						game.isPaused = true;
					}
				}
				if (event.type == sf::Event::LostFocus)
					game.isPaused = true;
				if (event.type == sf::Event::TextEntered) {
					playerInput += event.text.unicode;
					game.inputter(playerInput);
				}
			}
		}

		sf::Vector2f mousePos = sf::Vector2f(sf::Mouse::getPosition(window));

		if (state == CurrState::GAME) {
			if (game.isPaused) {

				if (game.getButRes() -> isPressed())
					game.isPaused = false;
				if (game.getButExit() -> isPressed())
					state = CurrState::MENU;
			}

			game.update(window, mousePos);
			game.draw(window);


		} else if (state == CurrState::OPTIONS) {
			options.update(mousePos);
			options.draw(window);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				state = CurrState::MENU;
			if (options.getButBack() -> isPressed())
				state = CurrState::MENU;

			if (options.getButEasy() -> isPressed())
				options.setDiff(Difficulty::EZ);
			if (options.getButNorm() -> isPressed())
				options.setDiff(Difficulty::NRMAL);
			if (options.getButHard() -> isPressed())
				options.setDiff(Difficulty::HARD);

			if (options.getButFont1() -> isPressed())
				options.setFont(1);
			if (options.getButFont2() -> isPressed())
				options.setFont(2);


		} else {	// Main Menu
			menu.update(mousePos);
			menu.draw(window);
			window.draw(gameTitle);


			if (menu.getButNew()->isPressed()) {
				game.gameStart(options.getDiff(), options.getFont());
				state = CurrState::GAME;
			}
			if (menu.getButLoad()->isPressed()) {
				game.loadGame();
				state = CurrState::GAME;
			}
			if (menu.getButOptions()->isPressed()) {
				state = CurrState::OPTIONS;
			}
			if (menu.getButExit()->isPressed())
				window.close();
		}
		window.display();
		window.clear(sf::Color(60, 60, 60));
	}
	return 0;
}
