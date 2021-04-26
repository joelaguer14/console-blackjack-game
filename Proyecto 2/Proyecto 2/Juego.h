#pragma once
#include<fstream>
using namespace std;
#include"Lista.h"
#include"Mazo.h"
#include"Dealer.h"
#include"Jugador.h"
class Juego
{
private:
	Lista* listaJugadores;
	Mazo* baraja;
public:
	Juego();
	void jugar();
	~Juego();
};

