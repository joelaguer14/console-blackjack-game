#include "Lista.h"



Lista::Lista()
{
	primero = NULL;
	actual = primero;
}


Lista::~Lista()
{
	while (actual != NULL) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
	delete primero;
}

Nodo * Lista::getPrimero()
{
	return primero;
}

void Lista::insertar(JugadorGenerico * j)
{

	Nodo * nuevo = new Nodo(j, NULL);
	if (primero == NULL) {
		primero = nuevo;
	}
	else {
		actual = primero;
		while (actual->getSig() != NULL) {
			actual = actual->getSig();
		}
		actual->setSig(nuevo);
	}
}

void Lista::ingresarCarta(JugadorGenerico * j, Carta *c)
{
actual = primero;
	while (actual != NULL) {
		if (actual->getInfo()->getNickname() == j->getNickname())
		{
			actual->setInfo(c);
		}
		actual= actual->getSig();
	}
}
Nodo * Lista::getActual()
{
	return actual;
}

void Lista::setActual(Nodo *a)
{
	actual = a;
}

void Lista::setPrimero(Nodo * p)
{
	primero = p;
}

void Lista::borrar()
{
	if (!listaVacia()) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
}

string Lista::toString()
{
	stringstream s;
	actual = primero;
	while (actual != NULL) {
		
		s << "Soy el jugador--"<<actual->getInfo()->toString()<<endl;
			actual = actual->getSig();
	}
	return s.str();
}

bool Lista::listaVacia()
{
		if (primero == NULL) {
			return true;
		}
		else {
			return false;
		}
	
}
