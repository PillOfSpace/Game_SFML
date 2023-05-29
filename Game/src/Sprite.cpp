#include"include/Sprite.hpp"


namespace Sprites {
void Sprite::LoadSprite(sf::Sprite &s, sf::Texture &t, const int x, const int y){


    s.setTexture(t);
    s.setPosition(x,y);


}

void Sprite::KeyPressed(sf::Sprite &s){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        s.move(-0.1,0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        s.move(0.1,0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        s.move(0,-0.1);
    }

}
}
