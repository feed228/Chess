#include "Source.hpp"
#include <iostream>
Source::Source()
{
    window = new sf::RenderWindow(sf::VideoMode(this->width, this->height), "Chess"); //, sf::Style::None);
    window->setFramerateLimit(this->fps);
}
////////////////////////////////////////////////////////////////
Source::~Source()
{
    delete this->window;
}

////////////////////////////////////////////////////////////////
void Source::update(sf::Event &event)
{
    while (this->window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            this->window->close();
    }
}
////////////////////////////////////////////////////////////////
void Source::draw(sf::Event &event)
{
    this->window->clear();
    this->window->draw(interface.getSprite());
    this->window->display();
}
////////////////////////////////////////////////////////////////
void Source::start()
{
    while (this->window->isOpen())
    {
        sf::Event event;
        update(event);
        draw(event);
    }
}
