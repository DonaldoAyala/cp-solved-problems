#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "suma.h"
#include <dos.h>
int tt=100;
void printRight(int beginY, int endY ,int x) {
  	for (int i=beginY ; i<=endY ; i++) {
        gotoxy(x,i);
        printf("*");
    }
}
void printBottom(int beginX, int endX ,int y) { 
for (int i=beginX; i>=endX ; i--) {
        gotoxy(i,y);
        printf("*");
    }
}
main () {
	int x=1;
	int numero_de_cuadros = 10;//Numero de cuadros que se van a imprimir
	while(true) {
		system("cls");
		x = 1;
		//Imprime los cuadros del mas chico al mas grande
		for( int i=1 ; i<=numero_de_cuadros ; i++) {
			printRight(0, 5*i - 2*(i-1), getScreenWidth()-(2+5*i));
	   		printBottom( getScreenWidth(), getScreenWidth()-(2+5*i), 3+(i*3) );
	   		x++;t(x);
		  	Sleep(tt);
		}
		system("cls");
		//Imprime los cuadros del mas grande al mas chico
		for( int i=numero_de_cuadros ; i>=1 ; i--) {
			x--;t(x);
			printRight(0, 5*i - 2*(i-1), getScreenWidth()-(2+5*i));
	   		printBottom( getScreenWidth(), getScreenWidth()-(2+5*i), 3+(i*3) );
		  	Sleep(tt);
		}
    }
 system("pause");
}
