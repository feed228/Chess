#ifndef _START_CALC_
#define _START_CALC_

#include "../pakage/init.hpp"
#include "../pakage/interface/Interface.cpp"
<<<<<<< HEAD
=======

>>>>>>> 32b231d54a72db07e40f5ee832f25a4bfadfcfde

class Source
{
private:
    Interface interface;
    sf::RenderWindow *window;

    int width = 1300;
    int height = 800;
    int fps = 60;

    float dX = 0;
    float dY = 0;

    sf::Font font;

    void update(sf::Event &event);
    void draw(sf::Event &event);

public:
    Source();
    ~Source();

    int getWidth() { return this->width; }
    int getHeight() { return this->height; }
    void start();
};

#endif