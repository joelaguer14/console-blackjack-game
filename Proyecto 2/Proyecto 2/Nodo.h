#pragma once
#include "JugadorGenerico.h"
class Nodo
{
private:
	Nodo * siguiente;
	JugadorGenerico* info;
public:
	Nodo(JugadorGenerico*,Nodo*);
	~Nodo();
	Nodo* getSig();
	JugadorGenerico* getInfo();
	void setSig(Nodo*);
	void setInfo(Carta *c);

};

