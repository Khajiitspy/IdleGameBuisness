#pragma once
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics.hpp>

class Button
{
public:
    Button(sf::Vector2f position, sf::Vector2f size, sf::Color color, std::string text);

    void draw(sf::RenderWindow& window);
    bool isMouseOver(const sf::RenderWindow& window);
    bool isClicked(const sf::Event& event, const sf::RenderWindow& window);

private:
    sf::RectangleShape shape;
    sf::Text buttonText;
    sf::Font font;
};

