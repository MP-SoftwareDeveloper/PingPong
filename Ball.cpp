#include<iostream>

#include "mainHeader.h"

using namespace std;

Ball::Ball()
{ 
    ball.set_point(margin+width/2,margin+height/2);
    color=8;
    dir_x=1;
    dir_y=1;
}
void Ball::draw()
{
    set_color_text(color);
    gotoxy(ball.get_x(),ball.get_y());

    cout<<"O";
}
void Ball::erase()
{
    gotoxy(ball.get_x(), ball.get_y());
    cout<<" ";
}
void Ball::move()
{
    if(dir_x==1)
        ball.move_right();
    else
        ball.move_left();

     if(dir_y==1)
        ball.move_down();
    else
        ball.move_up();   

}
void Ball::collision(Player player_top, Player player_bottom)
{
   
    if(ball.get_y()==(height+margin-1))
       dir_y=-1;
    if(ball.get_y()==margin)
       dir_y=1;

    if(ball.get_x()==margin)
      dir_x= 1;
    if(ball.get_x()==(margin+width-1))
      dir_x =-1;   

    if(ball.get_y() == margin+ height -2
     && ball.get_x() >= player_bottom.get_x() - block_size && ball.get_x() <= player_bottom.get_x()+block_size)
    {
        dir_y= -1;
    }   
    if(ball.get_y() == margin+ 1
     && ball.get_x() >= player_top.get_x() - block_size && ball.get_x() <= player_top.get_x()+block_size)
    {
        dir_y=  1;
    }    
}
int Ball::get_x()
{
    return ball.get_x();
}
int Ball::get_y()
{
    return ball.get_y();
}