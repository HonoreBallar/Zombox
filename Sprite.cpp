#include "Sprite.h"

Sprite::Sprite()
{
    //ctor
}
sf::Sprite Sprite::Load(char filename)
{
    sf::Texture T;
    T.loadFromFile(filename);
    sf::Sprite s;
    s.setTexture(T);
    return s;
}
