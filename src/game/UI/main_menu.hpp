#include <SFML/Graphics.hpp>


class Main_menu
{
private:
    static sf::Sprite* sprite;
    static sf::Texture* texture;


public:


    ////////////////////////////////////////////////////////////
    /// \brief get the pointer of the drawable sprite of the main_menu
    ///
    /// TODO: animate by using animation
    ///
    ////////////////////////////////////////////////////////////
    static sf::Sprite* getSprite();
};

