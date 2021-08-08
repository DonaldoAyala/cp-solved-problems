#include <bits/stdc++.h>
using namespace std;

void elemento_maximo (vector<int> A, int n, int &maximo, int &instrucciones) {
	instrucciones++; // asignación de maximo
	maximo = A[0];
	instrucciones++; // creación de i
	int i; 
	instrucciones++; // inicialización de i = 1
	for ( i = 1 ; i < n ; i++ ) {
		instrucciones++; // veces que se ejecuta el for
		instrucciones++; // if
		if ( A[i] > maximo ) {
			instrucciones++;
			maximo = a[i];
		}
	}
	instrucciones++; // comprobación que rompe el ciclo for
}

int main () {
	
}