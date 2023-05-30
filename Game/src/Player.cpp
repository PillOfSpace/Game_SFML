#include"include/Player.hpp"


Player::Player(sf::Texture &image){
        sprite_.setTexture(image);
        rect = sf::FloatRect(280, 780, 90, 115);

        dx=dy=0;
        currentFrame = 0;
}


void Player::Update(int ground, float time){
    rect.left += dx * time;//перемещаем координату х умноженную на time

    if(!onGround){//если не на земле, то падаем с ускорением
        dy = dy + 0.0005 * time;
    }
    rect.top += dy * time;//прибавляем это к скорости

    onGround = false;

    if(rect.top > ground){
        rect.top = ground;
        dy = 0;
        onGround = true;
    }

    currentFrame += 0.005 *time;
    if(currentFrame > 4) currentFrame -= 4;
    if(dx > 0){
        sprite_.setTextureRect(sf::IntRect(130*int(currentFrame)+130, 780 , -130, 115));
    }
    if(dx < 0){
        sprite_.setTextureRect(sf::IntRect(130*int(currentFrame), 780 , 130, 115));
    }


    sprite_.setPosition(rect.left, rect.top);

    dx = 0;
}

void Player::KeyPressed(Player &player){//бинд клавиш
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        player.dx = -4;

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        player.dx = 4;

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        if(player.onGround){
            player.dy = -0.4;
            player.onGround = false;
        }
    }


}




