#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    while (window.isOpen()) {
        sf::Event event;  // Создаем объект события

        while (window.pollEvent(event)) {  // Получаем событие
            if (event.type == sf::Event::Closed) {  // Проверяем тип события
                window.close();  // Закрываем окно
            }
        }

        window.clear();
        // Здесь рисуйте ваши объекты
        window.display();
    }

    return 0;
}
