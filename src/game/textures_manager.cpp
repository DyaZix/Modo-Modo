#include "textures_manager.hpp"

sf::Texture** Textures_manager::textures = nullptr;


sf::Texture** Textures_manager::getTextures()
{
    return textures;
}

void Textures_manager::addTexture(const char* path)
{
    sf::Texture* texture = new sf::Texture();
    texture->loadFromFile(path);

    textures[0] = texture;
}