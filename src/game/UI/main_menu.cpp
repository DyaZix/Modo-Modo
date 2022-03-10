#include "main_menu.hpp"


sf::Sprite& Main_menu::sprite = *(new sf::Sprite());
sf::Texture& Main_menu::texture = *(new sf::Texture());

Animation* Main_menu::animation = new Animation(1920, 1080, *(Textures_manager::getTextures()[0]));




sf::Sprite& Main_menu::getAnimation()
{
    texture.loadFromFile("src/assets/UI/titlescreen.png");
    Main_menu::animation = new Animation(1920, 1080, *(Textures_manager::getTextures()[0]));

    return sprite;
}