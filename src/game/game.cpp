#include "game.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

// paused var init
bool Game::paused = true;



////////////////////////////////////////////////////////////
// paused state functions
////////////////////////////////////////////////////////////
void Game::pause()
{
    Game::paused = true;
}

void Game::resume()
{
    Game::paused = false;
}




////////////////////////////////////////////////////////////
// Main function to start the game
////////////////////////////////////////////////////////////
void Game::start()
{
    

    ////////////////////////////////////////////////////////////
    // WINDOW CREATION
    ////////////////////////////////////////////////////////////
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Waza est pas bo", sf::Style::Fullscreen);
    auto image = sf::Image{};


    ////////////////////////////////////////////////////////////
    // Icon setup
    ////////////////////////////////////////////////////////////
    if (!image.loadFromFile("src/assets/icons/ban.png"))
    {
        std::cout<<"erreur de l'affichage de l'icône";
    }
    window.setIcon(image.getSize().x, image.getSize().y, image.getPixelsPtr());
    
    
    ////////////////////////////////////////////////////////////
    // Circle creation (test)
    ////////////////////////////////////////////////////////////
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);



    ////////////////////////////////////////////////////////////
    // Game loop
    ////////////////////////////////////////////////////////////
    while (window.isOpen())
    {

        // TODO: renderer call
        if (paused)
        {

        }
        else
        {

        }
        window.clear();
        window.draw(shape);
        window.display();


        // Close window
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

    }
}







