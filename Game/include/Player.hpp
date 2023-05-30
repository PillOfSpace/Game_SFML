#ifndef PLAYER_HPP
#define PLAYER_HPP
#include"SFML/Graphics.hpp"
#include"include/Texture.hpp"


class Player
        :public Textures::Texture{
public:


    float dx, dy;//скорость
    sf::FloatRect rect;//(x,y,wight,height)
    bool onGround;//проверка на земле ли персонаж
    sf::Texture texture_;
    sf::Sprite sprite_;
    float currentFrame;//текущий кадр



    Player(sf::Texture &image);



    void Update(int ground, float time);
    static void KeyPressed(Player &player);

};



#endif // PLAYER_HPP
