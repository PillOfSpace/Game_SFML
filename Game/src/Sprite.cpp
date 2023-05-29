#include"include/Sprite.hpp"


namespace Sprites {
void Sprite::LoadSprite(sf::Sprite &s, sf::Texture &t, const int x, const int y){


    s.setTexture(t);
    s.setPosition(x,y);


}
}
