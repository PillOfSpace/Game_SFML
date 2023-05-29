#pragma once




#include"include/Texture.hpp"
#include"memory"


namespace Sprites {
class Sprite
        :public Textures::Texture{
public:
    static void LoadSprite(sf::Sprite &s, sf::Texture &t, const int x, const int y);
    static void KeyPressed(sf::Sprite &s);
protected:
  std::shared_ptr<Textures::Texture> tex;
};
}


