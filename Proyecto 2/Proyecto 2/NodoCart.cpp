#include "NodoCart.h"



NodoCart::NodoCart(Carta* c, NodoCart* n)
{
	siguiente = n;
	contenido = c;
}

void NodoCart::setSig(NodoCart * s)
{
	siguiente = s;
}

void NodoCart::setCont(Carta * c)
{
	contenido = c;
}

NodoCart* NodoCart::getSig()
{
	return siguiente;
}

Carta * NodoCart::getCont()
{
	return contenido;
}


NodoCart::~NodoCart()
{
}
