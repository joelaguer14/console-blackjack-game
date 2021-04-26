#pragma once
#include <string>
using namespace std;
#include"JugadorGenerico.h"
class Jugador:public JugadorGenerico
{
public:
	Jugador(string);
	bool pideCarta(int);
	void pedirCarta(Carta*);
	string toString();
	string getNickname();
	void volteaSegunda();
	Mano* getMano();
	bool sePaso();
	~Jugador();
};

