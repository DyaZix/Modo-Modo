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
    // Use Sprites with Sprites::Tiles and Map::data
}



void Renderer::displayObjects(){

    // TODO: DisplaySprites
    // Use Sprites with Sprites::Objects
}


void Renderer::display(){

    Renderer::displayMap();
    Renderer::displayObjects();
    // TODO: diplsayUI()
    // TODO: displayCursor()
}