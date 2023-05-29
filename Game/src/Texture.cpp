#include"include/Texture.hpp"

namespace Textures {



void Texture::LoadTexture(sf::Texture &t, const std::string &name){

   t.loadFromFile(name);
   return;
}
}
