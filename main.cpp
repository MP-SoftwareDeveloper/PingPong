#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
//////////// to use color in console 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void set_color_text(int color)
{
    SetConsoleTextAttribute(console , color);    
}
void gotoxy(int x, int y)
{
    CursorPosition.X=x;
    CursorPosition.Y=y;
    SetConsoleCursorPosition(console, CursorPosition);
}

void setcursor(bool visible, DWORD size)
{
    if(size == 0)
        size = 20;
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo (console, &lpCursor);
}


int main()
{   
    for(int i=1; i<256;i=i+10)
    {
      set_color_text(i);
      cout << "Hey You....."<<endl;
    }
    for(int i=20;i<100;i=i+15)
    {
        gotoxy(i,10);
        cout << "Hello";
        Sleep(1000);
    }
    getch();
    return 0;
}