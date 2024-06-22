#include<iostream>

#include "mainHeader.h"

using namespace std;

Player::Player(int x, int y)
{

    center.set_point(x,y);
    color=2;
}
void Player::draw()
{
    int x =center.get_x();
    int y =center.get_y(); 
    for(int i=x-block_size;i<=x+block_size;i++)
    {
        set_color_text(color);
        gotoxy(i,y);
        cout<<(char)254;
    }
}
void Player::erase()
{

}
void Player::move(int direction)
{

}
void Player::set_name(string name)
{
    this->name=name;
}
void Player::set_color(int color)
{
    this->color=color;
}
int Player::get_color()
{
    return color;
}
int Player::get_x()
{
    return center.get_x();
}
int Player::get_y()
{
    return center.get_y();
}