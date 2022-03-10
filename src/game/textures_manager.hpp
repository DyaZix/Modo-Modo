#include "../include/SFML/Graphics"

class Textures_manager
{
private:
    static sf::Texture** textures;
    
public:
    static sf::Texture** getTextures();
    static void addTexture(const char* path);

};


