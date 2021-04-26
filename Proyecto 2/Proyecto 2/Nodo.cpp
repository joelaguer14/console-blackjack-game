#include "Nodo.h"



Nodo::Nodo(JugadorGenerico* i, Nodo*n = NULL)
{
	siguiente = n;
	info = i;

}


Nodo::~Nodo()
{

}

Nodo * Nodo::getSig()
{
	return siguiente;
}

JugadorGenerico * Nodo::getInfo()
{
	return info;
}
void Nodo::setInfo( Carta *c)
{
	this->info->pedirCarta(c);
}

void Nodo::setSig(Nodo *n)
{
	siguiente = n;
}
