#pragma once
#include<sstream>
#include<string>
using namespace std;
class Carta
{
private:
	int valor;
	int numero;
	int palo;
	bool bocaArriba;
public:
	Carta();
	~Carta();
	int getValor();
	int getPalo();
	void setValor();
	void setValor(int);
	void setPalo(int);
	void voltear();
	void setNumero(int);
	int getNumero();
	bool getBocaArriba();
	string toString();
};

