#include <stdio.h>
#define negro         0 
#define azul          1 
#define verde         2 
#define cyan          3 
#define rojo          4 
#define magenta       5 
#define marron        6 
#define grisclaro     7 
#define grisoscuro    8 
#define azulclaro     9 
#define verdeclaro   10 
#define cyanclaro    11 
#define rojoclaro    12 
#define magentaclaro 13 
#define amarillo     14 
#define blanco       15 

void t(int n)
{ 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n); 
} 
void gotoxy(short x, short y) 
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int getScreenWidth() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return csbi.srWindow.Right - csbi.srWindow.Left;
}
