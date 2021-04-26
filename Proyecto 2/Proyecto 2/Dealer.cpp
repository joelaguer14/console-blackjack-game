#include "Dealer.h"



Dealer::Dealer()
{
	nickname = "Dealer";
	mano = new Mano;
	contador = 0;
}

bool Dealer::pideCarta(int opc)
{
	if (mano->getPuntos() < 16) {
		return true;
	}
	else {
		return false;
	}
}

void Dealer::pedirCarta(Carta* c)
{
	if (contador != 1) {
		c->voltear();
		mano->agregarCarta(c);
		contador++;
	}
	else if (contador == 1) {
		mano->agregarCarta(c);
		contador++;
	}
}


void Dealer::volteaSegunda()
{
	mano->getCartas()->SetActual(mano->getCartas()->getPrimero());
	while (mano->getCartas()->getActual() != NULL) {
		if (mano->getCartas()->getActual()->getCont()->getBocaArriba() == false) {
			mano->getCartas()->getActual()->getCont()->voltear();
		}
		mano->getCartas()->SetActual(mano->getCartas()->getActual()->getSig());
	}
}

string Dealer::toString()
{
	stringstream s;
	while (mano->getCartas()->getActual() != NULL) {
		if (mano->getCartas()->getActual()->getCont()->getBocaArriba() == true) {
			s << "Nickname: " << nickname << endl;
			s << "Mano: " << mano->toString() << endl;
		}
		else {
			s << "Carta sin voltear" << endl;
		}
		mano->getCartas()->SetActual(mano->getCartas()->getActual()->getSig());
	}
	return s.str();
}

string Dealer::getNickname()
{
	return nickname;
}

Mano * Dealer::getMano()
{
	return mano;
}

bool Dealer::sePaso()
{
	if (mano->getPuntos() > 21) {
		return true;
	}
	else {
		return false;
	}
}

Dealer::~Dealer()
{
	delete mano;
}
