#include "Jugador.h"



Jugador::Jugador(string n)
{
	nickname = n;
	mano = new Mano();
}

bool Jugador::pideCarta(int opc)
{
	if (mano->getPuntos() < 21 && opc == 1) {
		return true;
	}
	else {
		return false;
	}
}

void Jugador::pedirCarta(Carta *c)
{
	c->voltear();
	mano->agregarCarta(c);
}

string Jugador::toString()
{
	stringstream s;
	s << "Nickname: " << nickname << endl;
	s << "Mano: "<<mano->toString() << endl;
	return s.str();
}

string Jugador::getNickname()
{
	return nickname;
}

void Jugador::volteaSegunda()
{

}

Mano * Jugador::getMano()
{
	return mano;
}

bool Jugador::sePaso()
{
	if (mano->getPuntos() > 21) {
		return true;
	}
	else {
		return false;
	}
}


Jugador::~Jugador()
{
	delete mano;
}
