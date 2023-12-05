#include <ncurses.h>
#include <iostream>
#include <unistd.h>

using namespace std;

int main (int argc, char ** argv)
{
    initscr();
    raw();
    noecho();
    // moving cursor, x = 20, y = 10
    char ch;
    halfdelay(5);
    nodelay(stdscr, TRUE);
    for (;;) {
        

        if ( ch = getch() != ERR ) {
            
            addch(ch);
            refresh();
            break;
        }

        addch('3');
        
        refresh();
    }

   
    refresh();
    getch();
    endwin();
    return 0;
}
