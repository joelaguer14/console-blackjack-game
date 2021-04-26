#pragma once
#include"NodoCart.h"
#include"Mazo.h"
class ListaCart
{
private:
	NodoCart * primero;
	NodoCart * actual;
public:
	ListaCart();
	~ListaCart();
	void insertar(Carta*);
	void borrar();
	int getPuntos();
	NodoCart* getActual();
	NodoCart* getPrimero();
	void SetActual(NodoCart*);
	bool listaVacia();
};

