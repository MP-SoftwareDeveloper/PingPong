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
    for(int i=0;i<256;i++)
    {
        cout<<i<<" "<<(char)i<<endl;
    }
    Sleep(500);
    getch();
    return 0;
}