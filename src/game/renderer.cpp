#include "renderer.hpp"

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}


void Renderer::loadTextures(){

    // TODO: Get textures in Assets/Textures/*, load it and add it in Renderer::texturelist
}


void Renderer::displayMap(){

    // TODO: DisplayMap
    // Use map data in Map::data
}



void Renderer::displaySprites(){

    // TODO: DisplaySprites
    // Use Sprites with Sprites::SpriteList
}


void Renderer::display(){

    Renderer::displayMap();
    Renderer::displaySprites();
}