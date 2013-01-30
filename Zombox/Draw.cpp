#include "Draw.h"

Draw::Draw()
{
    //ctor
}
void Draw::Drawable(sf::RenderWindow& W, sf::Drawable& D)
{
    W.draw(D);
}
