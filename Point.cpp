#include<iostream>

#include "mainHeader.h"

using namespace std;

void Point::move_right()
{
    if(x<width+margin-1)
        x++;
}
void Point::move_left()
{
    if(x>margin)
        x--;
}
void Point::move_up()
{
    if(y>margin)
        y--;
}
void Point::move_down()
{
    if(y<height+margin-1)
        y++;
}
void Point::set_point(int x, int y)
{
    this->x=x;
    this->y=y;
}
int Point::get_x()
{
    return x;
}
int Point::get_y()
{
    return y;
}
 Point::Point()
{
    
}