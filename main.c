#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define WIDTH 80
#define HEIGHT 24
#define FPS 60

struct player {
    int position_x;
    int position_y;
    int lives;
    int fired;
    int missile_x;
    int missile_y;
    char *sprite;
} player = {WIDTH / 2, HEIGHT - 2, 3, false, 0, 0, "|-^-|"};

int main(int argc, char **argv) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    scrollok(stdscr, TRUE);
    nodelay(stdscr, TRUE);

    while (true) {
        mvprintw(player.position_y, player.position_x, player.sprite);
        refresh(); 
    }
    
    endwin();
    
    return 0;
}

