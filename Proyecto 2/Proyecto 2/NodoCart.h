#pragma once
#include"Carta.h"
class NodoCart
{
private:
	NodoCart * siguiente;
	Carta* contenido;

public:
	NodoCart(Carta*,NodoCart*);
	void setSig(NodoCart*);
	void setCont(Carta*);
	NodoCart* getSig();
	Carta* getCont();

	~NodoCart();
};

