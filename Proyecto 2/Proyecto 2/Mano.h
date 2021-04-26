#pragma once
#include"Mazo.h"
#include"ListaCart.h"
class Mano
{
private:
	ListaCart *cartas;
public:
	Mano();
	int getPuntos();
	void agregarCarta(Carta*);
	void limpiar();
	ListaCart* getCartas();
	string toString();
	~Mano();
};

