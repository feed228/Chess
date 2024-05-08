#ifndef _START_CALC_
#define _START_CALC_

#include "../pakage/init.hpp"
#include "../pakage/interface/Interface.cpp"
#include "../pakage/button/Button.cpp"


class Source
{
private:
    Interface interface;
    sf::RenderWindow *window;
    sf::Vector2f mou_poz;

    int width = 1300;
    int height = 800;
    int fps = 60;

    float dX = 0;
    float dY = 0;

    sf::Font font;

    std::string string_Text = "0";

    bool active = false;
    bool CLICK = false;
    bool Pressclick = false;

    void update(sf::Event &event);
    void draw(sf::Event &event);

    void updateMousePosition();

    void Create_Buttons();
    void DrawButton();
    void FunctionOfButton(const int &index);
    void MouseAnimateButtons(const sf::Vector2f &mouse_position);


public:
    Source();
    ~Source();

    int getWidth() { return this->width; }
    int getHeight() { return this->height; }
    sf::Vector2f getMousePosition() { return this->mou_poz; }
    void start();
};

#endif