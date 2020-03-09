//
//  AssetManager.hpp
//  issa-engine
//
//  Created by Zeeshan Hooda on 3/8/20.
//  Copyright © 2020 Deceptive Labs. All rights reserved.
//

#pragma once

#include <map>

#include <SFML/Graphics.hpp>

namespace Issa {
class AssetManager {
public:
    AssetManager() {}
    ~AssetManager() {}
    
    void LoadTexture(std::string name, std::string fileName);
    sf::Texture &GetTexture(std::string name);
    
    void LoadFont(std::string name, std::string fileName);
    sf::Font &GetFont(std::string name);
    
private:
    std::map<std::string, sf::Texture> _textures;
    std::map<std::string, sf::Font> _fonts;
};
}
