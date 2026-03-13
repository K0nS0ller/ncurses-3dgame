#include <stdio.h>
#include <ncurses.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

#define MAP_WIDTH 45;
#define MAP_HEIGHT 45;

char gradient[9] = "$@0/(),.";

int main(){
	// Инициализация ncurses
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE); // для неблокирующего ввода
	curs_set(0);
	start_color();

	int x, y;
	getmaxyx(stdscr, y, x);
	// Определить цветовые пары
	
	char map[]="############################################"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#     ############################         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #                          #         #"\
			   "#     #############       ########         #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "#                                          #"\
			   "############################################";


	float playerx = 0.0;
	float playery = 0.0;
	float view_degree = 0.0;

	int getMapCell(int y, int x) {
		if (y < 0 || y >= MAP_HEIGHT || x < 0 || x >= MAP_WIDTH) return 1;
		return map[y * MAP_WIDTH + x];
	}
	
	float castRay(float rayAngle) {
	    float x = playerx;
	    float y = playery;
	    float dx = cos(rayAngle);
	    float dy = sin(rayAngle);
	
	    int i = 0;
	    while (getMapCell(y, x == 0) {
	        x += dx * 0.1;
	        y += dy * 0.1;
	        i++;
	        if (i > 400) break;
	    }
	
	    const float distance = sqrt(pow((x - playerx), 2) + pow((y - playery), 2));
	    const float wallHeight = 300 / distance;
	
	    return wallHeight;
	}
	int ch;
	// Главный цикл
	while (ch != 'q') {
		getch();
		if(ch == 'w')
		{
			playerx += 0.1*cos(view.degree)
			playery += 0.1*sin(view.degree)
		}
		if(ch == 's')
		{
			playerx-=0.1*cos(view.degree);
			playery -= 0.1*sin(view.degree);
		}
		if(ch == 'a')
		{
			view.degree += 0.1;
		}
		if(ch == 'd')
		{
			view.degree -= 0.1;
		}
    // Обновление позиции игрока
    
    // Очистка буфера экрана (можно просто перезаписывать)
    
    // Рейкастинг для каждого столбца
    	for (int x = 0; x < row*col; x++) {
        	// Рассчитать луч, DDA, получить высоту стены
    	    // Заполнить буфер для этого столбца (стена, пол, потолок)
	    }
    
    // Вывод буфера на экран (например, цикл по всем y,x)
    
    // Небольшая задержка
    	napms(16);
    }
    endwin();
    return 0;
}
