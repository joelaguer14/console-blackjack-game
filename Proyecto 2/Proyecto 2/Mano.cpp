#include "Mano.h"



Mano::Mano()
{
	cartas = new ListaCart();
}

int Mano::getPuntos()
{
	int puntos = 0;
	puntos = cartas->getPuntos();
	return puntos;
}


void Mano::agregarCarta(Carta * c)
{
	cartas->insertar(c);
}

void Mano::limpiar()
{
	while (cartas->listaVacia() == false) {
		cartas->borrar();
	}
}

ListaCart * Mano::getCartas()
{
	return cartas;
}

string Mano::toString()
{
	stringstream s;
	s << cartas->getPuntos();
	return s.str();
}

Mano::~Mano()
{
	delete cartas;
}
