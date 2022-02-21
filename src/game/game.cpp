#include "game.hpp"
#include "UI/main_menu.cpp"
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
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

    sf::RenderWindow window(sf::VideoMode(  desktopMode.width,
                                            desktopMode.height,
                                            desktopMode.bitsPerPixel),
                                            "Waza est pas bo",
                                            sf::Style::Fullscreen);
                            
    window.setVerticalSyncEnabled (false);


    ////////////////////////////////////////////////////////////
    // Icon setup
    ////////////////////////////////////////////////////////////
    auto image = sf::Image{};
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
        window.draw(*Main_menu::getSprite());
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







