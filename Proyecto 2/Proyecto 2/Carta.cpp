#include "Carta.h"



Carta::Carta()
{
	valor = 0;
	palo = 0;
	bocaArriba = false;
	numero = 0;
}


Carta::~Carta()
{
}

int Carta::getValor() {
	return valor;
}

int Carta::getPalo() {
	return palo;
}

void Carta::setValor() {
	if (numero <= 10) {
		valor = numero;
	}
	else if (numero > 10) {
		valor = 10;
	}
}

void Carta::setValor(int v) {
	valor=v;
}

void Carta::setPalo(int p) {
	palo = p;
}

void Carta::voltear() {
	bocaArriba = true;
}

void Carta::setNumero(int n)
{
	numero = n;
}

int Carta::getNumero()
{
	return numero;
}

bool Carta::getBocaArriba()
{
	return bocaArriba;
}

string Carta::toString()
{
	string pal;
	if (palo == 1) {
		pal = "Es";
	}
	else if (palo == 2) {
		pal = "Co";
	}
	else if (palo == 3) {
		pal = "Di";
	}
	else {
		pal = "Tre";
	}
	stringstream s;
	if (numero >= 2 && numero <= 10) {
		s << "Carta: " << numero << " " << pal << endl;
	}
	else if (numero==1){
		s << "Carta: A" << " " << pal << endl;
	}
	else if (numero == 11) {
		s << "Carta: J" << " " << pal << endl;
	}
	else if (numero == 12) {
		s << "Carta: Q" << " " << pal << endl;
	}
	else if (numero == 13) {
		s << "Carta: K" << " " << pal << endl;
	}
	return s.str();
}
