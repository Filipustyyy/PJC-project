#include "Options.hpp"
#include "Generator.hpp"
#include "Menu.hpp"
#include "Game.hpp"

auto main() -> int {
	auto window = sf::RenderWindow(
			sf::VideoMode({1920, 1080}),
			"Primate typing education software", sf::Style::Close
			);
	auto event = sf::Event();
	window.setFramerateLimit(30);

	bool isGame, isPaused, isOptions = false;

	Menu menu = Menu();
	Options options = Options();
	Generator wordGen = Generator();
	Game game = Game();

	sf::Clock clock;
	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}


		if (isGame) {
			if (isPaused) {

			} else {

			}
		} else if (isOptions) {
			options.update();
			options.draw(window);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				isOptions = false;

		} else {	// Main Menu


			if (menu.getButNew() -> isPressed()) {
				game.gameStart(options.getDiff());
				isGame = true;
			}
			if (menu.getButLoad() -> isPressed()) {
				game.loadGame();
				isGame = true;
			}
			if (menu.getButOptions() -> isPressed())
				isOptions = true;
		}

		window.display();
	}
	return 0;
}
