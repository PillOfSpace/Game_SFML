#include"SFML/Graphics.hpp"

int main(){

    sf::RenderWindow window(sf::VideoMode(700,400), "test");//создать окно
    window.setFramerateLimit(60);//ограничить лимит fps

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){//проверка очереди событий(закрытие окна)
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        window.display();
    }


}
