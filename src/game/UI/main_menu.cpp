#include "main_menu.hpp"

sf::Sprite* Main_menu::sprite = new sf::Sprite();
sf::Texture* Main_menu::texture = new sf::Texture();



sf::Sprite* Main_menu::getSprite()
{
    texture->loadFromFile("src/assets/UI/titlescreen.png");
    sprite->setTexture(*texture);

    return sprite;
}