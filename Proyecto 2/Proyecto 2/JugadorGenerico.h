#pragma once
#include <string>
using namespace std;
#include"Mazo.h"
#include "Mano.h"
class JugadorGenerico
{
protected:
	string nickname;
	Mano* mano;
public:
	JugadorGenerico();
	virtual bool pideCarta(int ) = 0;
	virtual void pedirCarta(Carta*)=0;
	virtual bool sePaso() = 0;
	virtual void volteaSegunda() = 0;
	virtual string getNickname()=0;
	virtual string toString() = 0;
	virtual Mano* getMano() = 0;
	virtual ~JugadorGenerico();
};

