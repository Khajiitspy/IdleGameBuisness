#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>"
#include <iostream>

/////////////////// GAME PLAN ///////////////////////
//  This game will be a buisness tycoon, so the player will just be upgrading and adding new workers
//  The workers are going to fall asleep at their computor if the player does not click on them or a manager comes to them (also available to upgrade and buy) for a certain period of time
//  If I will have time, I want to make it possible for this game to go on forever, so the player can expand the offece space and price will atomatically increase for the next level of upgrade

int main() {
	sf::RenderWindow win(sf::VideoMode(700, 700), "IdleBuisness");
	Button startButton(sf::Vector2f(100, 100), sf::Vector2f(200, 60), sf::Color::Green, "Start");
	Button quitButton(sf::Vector2f(100, 200), sf::Vector2f(200, 60), sf::Color::Cyan, "Quit");

	while (win.isOpen()) {
		sf::Event action;
		while (win.pollEvent(action)) {
			if (action.type == sf::Event::Closed) {
				win.close();
			}
		}
		win.clear();
		startButton.draw(win);
		quitButton.draw(win);
		win.display();
	}
}