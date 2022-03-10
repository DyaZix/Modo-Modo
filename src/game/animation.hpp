#include <SFML/Graphics.hpp>


class Animation : public sf::Sprite
{
private:
    bool started = false;
    float delta_time = 100;

    int sprite_height;
    int sprite_width;
    int current_texture_index = 0;
    int max_texture_index; // Should be texture_spritesheet.width/sprite_width - 1

    sf::Texture& texture_spritesheet;
    sf::Texture* textures; 

public:

    explicit operator sf::Sprite() {
        return sf::Sprite(this->texture_spritesheet);
    }

    ////////////////////////////////////////////////////////////
    /// \brief Constructor
    ///
    /// Sets the height and width of the sprite to cut the spritesheet (texture)
    /// Texture should be got from the texture manager
    ///
    ////////////////////////////////////////////////////////////
    Animation(int sprite_height, int sprite_width, sf::Texture& texture);


    ////////////////////////////////////////////////////////////
    /// \brief Destructor
    ///
    ///
    ////////////////////////////////////////////////////////////
    ~Animation();



    void draw (sf::RenderTarget &target, sf::RenderStates states);

};