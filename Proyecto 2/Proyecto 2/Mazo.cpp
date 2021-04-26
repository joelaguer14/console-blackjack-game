#include "Mazo.h"



Mazo::Mazo()
{
	carta = new Carta*[52];
	for (int i = 0; i < 52; i++) {
		carta[i] = new Carta();
	}
	tamano = 52;
}


Mazo::~Mazo()
{
	for (int i = 0; i < 52; i++) {
		delete carta[i];
	}
	delete[] carta;
}

void Mazo::inicializar()
{
	int cont = 0;
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 13; j++) {
			carta[cont]->setPalo(i);
			carta[cont]->setNumero(j);
			carta[cont]->setValor();
			cont++;
		}
	}
}

void Mazo::barajar()
{
	Carta* x;
	srand(time(NULL));
	int n1;
	int n2;
	for (int i = 0; i < 26; i++) {
		
		n1 = rand() % 52;
		n2 = rand() % 52;
		if (n1 == n2) {
			while (n1 == n2) {
				n2 = rand() % 52;
			}
		}

		x = carta[n1];
		carta[n1] = carta[n2];
		carta[n2] = x;
	}
	
}

Carta * Mazo::tomarCarta()
{
	if (tamano != 0) {
		tamano--;
		return carta[tamano];
		carta[tamano] = NULL;
	}
	else if (tamano == 0) {
		cout << "Ya no hay cartas" << endl;
		return NULL;
	}
}

void Mazo::insertarCarta(Carta * c)
{
	for (int i = 0; i < 52; i++) {
		if (carta[i] == NULL) {
			carta[i] = c;
		}
	}
}
