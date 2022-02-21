#include <SFML/Graphics.hpp>

class Renderer
{
private:
    static sf::Texture* texturelist;



    ////////////////////////////////////////////////////////////
    /// \brief Loads textures in textureList
    ///
    /// Textures includes all of the images in assets (tiles, player, monsters, IU ..)
    /// Must be ran once
    ///
    /// \warning On Unix, paths must be written with "/" and not "\"
    ///
    ////////////////////////////////////////////////////////////
    static void loadTextures();
    
    
    
    ////////////////////////////////////////////////////////////
    /// \brief Displays the map
    ///
    /// Must be ran each frames
    /// Must be optimised to only display the textures seen by the camera
    ///
    ////////////////////////////////////////////////////////////
    static void displayMap();



    ////////////////////////////////////////////////////////////
    /// \brief Displays the sprites
    ///
    /// Must be ran each frames
    /// Must be optimised to only display the textures seen by the camera
    ///
    ////////////////////////////////////////////////////////////
    static void displaySprites();

public:


    ////////////////////////////////////////////////////////////
    /// \brief Displays the map and the sprites on it
    ///
    /// Must be ran each frames
    ///
    ////////////////////////////////////////////////////////////
    static void display();
};


