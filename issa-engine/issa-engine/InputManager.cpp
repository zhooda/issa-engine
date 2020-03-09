//
//  InputManager.cpp
//  issa-engine
//
//  Created by Zeeshan Hooda on 3/8/20.
//  Copyright © 2020 Deceptive Labs. All rights reserved.
//

#include "InputManager.hpp"

namespace Issa {
bool InputManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window) {
    if (sf::Mouse::isButtonPressed(button)) {
        sf::IntRect tempRect(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);
        if (tempRect.contains(sf::Mouse::getPosition(window))) {
            return true;
        }
    }
    return false;
}

sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow &window) {
    return sf::Mouse::getPosition(window);
}
}
