#include <SFML/Graphics.hpp>
#include "../animation.hpp"

class Main_menu
{
private:
    static sf::Sprite& sprite;
    static sf::Texture& texture;
    static Animation* animation;

public:


    ////////////////////////////////////////////////////////////
    /// \brief get the pointer of the drawable sprite of the main_menu
    ///
    /// TODO: animate by using animation
    ///
    ////////////////////////////////////////////////////////////
    static sf::Sprite& getAnimation();
};

