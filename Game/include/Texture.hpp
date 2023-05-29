#pragma once



#include"SFML/Graphics.hpp"
#include"string"
#include"memory"

namespace Textures {
class Texture{
public:
   static void LoadTexture(sf::Texture &t, const std::string &name);
private:
  sf::Texture texture;
};
}


