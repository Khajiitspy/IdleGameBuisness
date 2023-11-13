#include "Button.h"
Button::Button(sf::Vector2f position, sf::Vector2f size, sf::Color color, std::string text) {
    shape.setPosition(position);
    shape.setSize(size);
    shape.setFillColor(color);

    if (!font.loadFromFile("fonts/Blending-rgjzK.otf")) {
        
    }

    buttonText.setFont(font);
    buttonText.setCharacterSize(20);
    buttonText.setString(text);
    buttonText.setPosition(position.x + 10, position.y + 10);
    buttonText.setFillColor(sf::Color::Black);
}

void Button::draw(sf::RenderWindow& window) {
    window.draw(shape);
    window.draw(buttonText);
}

bool Button::isMouseOver(const sf::RenderWindow& window) {
    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
    sf::Vector2f buttonPosition = shape.getPosition();
    sf::Vector2f buttonSize = shape.getSize();

    return (mousePosition.x >= buttonPosition.x &&
        mousePosition.x <= buttonPosition.x + buttonSize.x &&
        mousePosition.y >= buttonPosition.y &&
        mousePosition.y <= buttonPosition.y + buttonSize.y);
}

bool Button::isClicked(const sf::Event& event, const sf::RenderWindow& window) {
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
        if (isMouseOver(window)) {
            return true;
        }
    }
    return false;
}