//
//  InputManager.hpp
//  issa-engine
//
//  Created by Zeeshan Hooda on 3/8/20.
//  Copyright © 2020 Deceptive Labs. All rights reserved.
//

#pragma once

#include <SFML/Graphics.hpp>

namespace Issa {
class InputManager {
public:
    InputManager() {}
    ~InputManager() {}
    
    bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
    sf::Vector2i GetMousePosition(sf::RenderWindow &window);
};
}
