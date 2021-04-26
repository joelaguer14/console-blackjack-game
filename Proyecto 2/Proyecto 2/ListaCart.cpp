#include "ListaCart.h"



ListaCart::ListaCart()
{
	primero = NULL;
	actual = primero;
}

ListaCart::~ListaCart()
{
	while (actual != NULL) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
	delete primero;
}

void ListaCart::insertar(Carta* c)
{
	actual = new NodoCart(c, NULL);
	if (listaVacia())// significa que la lista esta vacia
	{
		primero = actual;
	}
	else
	{
		actual->setSig(primero);
		primero = actual;
	}
}

void ListaCart::borrar()
{
	if (!listaVacia()) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
}

int ListaCart::getPuntos()
{
	int pts = 0;
	actual = primero;
	while (actual!=NULL) {
		pts = pts+actual->getCont()->getValor();
		actual = actual->getSig();
	}
	return pts;

}

NodoCart * ListaCart::getActual()
{
	actual = primero;
	return actual;
}

NodoCart * ListaCart::getPrimero()
{
	return primero;
}

void ListaCart::SetActual(NodoCart *n)
{
	actual = n;
}

bool ListaCart::listaVacia()
{
	if (primero == NULL) {
		return true;
	}
	else {
		return false;
	}
}
