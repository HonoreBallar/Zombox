#include "Gamestate.h"

Gamestate::Gamestate()
{
    //ctor
}
sf::RenderWindow Gamestate::Init()
{
    //sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    //sf::RenderWindow App(sf::VideoMode(desktop.width, desktop.height,desktop.bitsPerPixel), "Unnamed - Topdown shooter");
    sf::RenderWindow App(sf::VideoMode(800,600), "Zombox - Sidescroller");
}
