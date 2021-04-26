#pragma once
#include"JugadorGenerico.h"
class Dealer:public JugadorGenerico
{
private:
	int contador;
public:
	Dealer();
	bool pideCarta(int);
	void pedirCarta(Carta*);
	void volteaSegunda();
	string toString();
	string getNickname();
	Mano* getMano();
	bool sePaso();
	~Dealer();
};

