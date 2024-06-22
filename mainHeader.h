#include <iostream>
#include<windows.h>

using namespace std;

using namespace std;

void set_color_text(int color);
void gotoxy(int x, int y);
void setcursor(bool visible, DWORD size);

int const width=40;
int const height=20;
int const margin=3;
int const block_size=2;

class Point{
    private:
        int x,y;
    public:
        Point();
        void move_right();
        void move_left();
        void move_up();
        void move_down();

        void set_point(int x, int y);

        int get_x();
        int get_y();
};
class Ball{

private:
        Point ball;
        int color;
        int dir_x,dir_y;
public:
        void draw();
        void erase();
        void move();

        void collision();

        Ball();

        int get_x();
        int get_y();
};

class Player{
    private:
            Point center;
            string name;
            int color;
    public:
        Player(int x, int y);

        void set_name(string name);
        void set_color(int color);

        int get_color();
        string get_name();

        int get_x();
        int get_y();

        void draw();
        void erase();
        void move(int direction); // 1: right  , -1: left
};