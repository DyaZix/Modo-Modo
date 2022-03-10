#include "animation.hpp"

Animation::Animation(int sprite_height, int sprite_width, sf::Texture& texture)
: sprite_height(sprite_height), sprite_width(sprite_width), texture_spritesheet(texture)
{}

Animation::~Animation()
{
}





void Animation::draw(sf::RenderTarget &target, sf::RenderStates states)
{
    this->setTexture(this->textures[current_texture_index]);
    target.draw((sf::Sprite)*this);
}
