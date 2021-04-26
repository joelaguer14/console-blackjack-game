#include <iostream>
#include "Mazo.h"
#include"Juego.h"
int main() {
	Juego*j = new Juego;
	j->jugar();
	delete j;
	
	system("pause");
	return 0;
}