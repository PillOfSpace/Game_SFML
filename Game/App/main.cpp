#include"SFML/Graphics.hpp"
#include"include/Sprite.hpp"
#include"include/Texture.hpp"

int main(){

    sf::RenderWindow window(sf::VideoMode(700,400), "test");//создать окно
    window.setFramerateLimit(60);//ограничить лимит fps

    sf::CircleShape MyCircle(100.f);
    MyCircle.setFillColor(sf::Color::Green);

    sf::Texture texture_;
    sf::Sprite sprite_;
    Textures::Texture::LoadTexture(texture_, "..\\Game\\Textures\\elf_atlas.png");
    Sprites::Sprite::LoadSprite(sprite_, texture_, 50, 100);


    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){//проверка очереди событий(закрытие окна)
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }


        window.clear(sf::Color::White);
        window.draw(sprite_);
        window.display();
    }


    return 0;
}
