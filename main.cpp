#include <iostream>
#include <conio.h>
#include <windows.h>

#include "mainHeader.h"

using namespace std;

Player player_top(margin+width/2,margin);
Player player_bottom(margin+width/2,margin+height-1);
Ball ball;



void draw()
{
    int i,j;
    set_color_text(12);
 
    //draw top border
    for(i=0;i<width+2 * margin;i++)
    {
        for(j=0;j<margin;j++)
        {
            gotoxy(i,j);
            cout<<(char)176;
        }
        cout<<endl;
    }

    //draw left border
    for(i=0; i<margin;i++)
    {
        for(j=margin;j<height+margin;j++)
        {
            gotoxy(i,j);
            cout<<(char)176;
        }
        cout<<endl;
    }

    //draw right border
    for(i=width+margin; i<width+2*margin;i++)
    {
        for(j=margin;j<height+2*margin;j++)
        {
            gotoxy(i,j);
            cout<<(char)176;
        }
        cout<<endl;
    }

    //draw bottom border
    for(i=0;i<width+2*margin;i++)
    {
        for(j=margin+ height; j<height+2*margin;j++)
        {
            gotoxy(i,j);
            cout<<(char)176;
        }
    }
}

void play()
{
    while (true)
    {
        player_top.draw();
        player_bottom.draw();
        ball.draw();

        Sleep(30);

        ball.erase();
        ball.move();
        ball.collision();

    }
    
}
int main()
{   
    setcursor(false,0);
    draw();
    play();

    //Sleep(500);
    getch();
    return 0;
}