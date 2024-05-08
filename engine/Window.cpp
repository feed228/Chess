#include "Window.hpp"
#include <iostream>
Window::Window()
{
    window = new sf::RenderWindow(sf::VideoMode(this->width, this->height), "Chess"); //, sf::Style::None);
    window->setFramerateLimit(this->fps);
}
////////////////////////////////////////////////////////////////
Window::~Window()
{
    delete this->window;
}

////////////////////////////////////////////////////////////////
void Window::update(sf::Event &event)
{
    while (this->window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            this->window->close();
    }
}
////////////////////////////////////////////////////////////////
void Window::draw(sf::Event &event)
{
    this->window->clear();
    this->window->draw(interface.getSprite());
    this->window->display();
}
////////////////////////////////////////////////////////////////
void Window::start()
{
    while (this->window->isOpen())
    {
        sf::Event event;
        update(event);
        draw(event);
    }
}
