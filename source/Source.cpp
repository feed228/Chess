#include "Source.hpp"
#include <iostream>
Source::Source()
{
    window = new sf::RenderWindow(sf::VideoMode(this->width, this->height), "Network Petri", sf::Style::None);
    window->setFramerateLimit(this->fps);

    Source::Create_Buttons();
}
////////////////////////////////////////////////////////////////
Source::~Source()
{
    delete this->window;
}
////////////////////////////////////////////////////////////////
void Source::Create_Buttons()
{
}
////////////////////////////////////////////////////////////////
void Source::update(sf::Event &event)
{
    while (this->window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            this->window->close();
    }
    Source::updateMousePosition();
}
////////////////////////////////////////////////////////////////
void Source::draw(sf::Event &event)
{
    this->window->clear();
    this->window->draw(interface.getSprite());

    Source::DrawButton();
    Source::MouseAnimateButtons(sf::Vector2f(this->mou_poz.x, this->mou_poz.y));

    this->window->display();
}
////////////////////////////////////////////////////////////////
void Source::updateMousePosition()
{
    this->mou_poz.x = sf::Mouse::getPosition().x - this->window->getPosition().x;
    this->mou_poz.y = sf::Mouse::getPosition().y - this->window->getPosition().y;
}
////////////////////////////////////////////////////////////////
void Source::DrawButton()
{
}
////////////////////////////////////////////////////////////////

void Source::FunctionOfButton(const int &index)
{
    switch (index)
    {
    case 0:
    {

        break;
    }
    case 1:
    {

        break;
    }
    case 2:
    {

        break;
    }
    case 3:
    {

        break;
    }
    case 4:
    {

        break;
    }
    case 5:
    {

        break;
    }
    case 6:
    {

        break;
    }
    case 7:
    {
        break;
    }
    case 8:
    {

        break;
    }
    }
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
////////////////////////////////////////////////////////////////