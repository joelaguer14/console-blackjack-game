#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Carta.h"
class Mazo
{
private:
	Carta * *carta;
	int tamano;
public:
	Mazo();
	~Mazo();
	void inicializar();
	void barajar();
	Carta* tomarCarta();
	void insertarCarta(Carta*);
};

