#pragma once
#include"Nodo.h"
class Lista
{
private:
	Nodo * primero;
	Nodo*  actual;
public:
	Lista();
	~Lista();
	Nodo* getPrimero();
	void insertar(JugadorGenerico*);
	Nodo* getActual();
	void setActual(Nodo*);
	void setPrimero(Nodo*);
	void borrar();
	string toString();
	bool listaVacia();
	void ingresarCarta(JugadorGenerico * j, Carta *c);
};

