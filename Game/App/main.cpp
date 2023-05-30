#include"SFML/Graphics.hpp"
#include"include/Player.hpp"

int ground = 280;

int main(){


    sf::RenderWindow window(sf::VideoMode(700,400), "test");//создать окно


    sf::CircleShape MyCircle(100.f);
    MyCircle.setFillColor(sf::Color::Green);

    sf::Clock clock;

    sf::Texture texture_;
    Textures::Texture::LoadTexture(texture_, "..\\Game\\Textures\\ninja.png");


    Player p(texture_);



    while(window.isOpen()){

        float time = clock.getElapsedTime().asMicroseconds();//даем прошедшее время в микросекундах
        clock.restart();//перезагружает время
        time = time/800;//скорость игры

        sf::Event event;
        while(window.pollEvent(event)){//проверка очереди событий
            if(event.type == sf::Event::Closed){
                window.close();
            }

            Player::KeyPressed(p);


        }

        p.Update(ground, time);

        window.clear(sf::Color::White);
        window.draw(p.sprite_);
        window.display();
    }


    return 0;
}
