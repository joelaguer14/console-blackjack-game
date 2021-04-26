#include "Juego.h"



Juego::Juego()
{
	listaJugadores = new Lista();
	baraja = new Mazo();
}

void Juego::jugar()
{
			baraja->inicializar();
			baraja->barajar();
			Dealer* d = new Dealer();
			Jugador* j = new Jugador("Irene");
			Jugador* e = new Jugador("Joel");
			listaJugadores->insertar(j);
			listaJugadores->insertar(d);
			listaJugadores->insertar(e);
			listaJugadores->ingresarCarta(j,baraja->tomarCarta());
			listaJugadores->ingresarCarta(e, baraja->tomarCarta());
			cout << listaJugadores->toString();
			listaJugadores->ingresarCarta(e, baraja->tomarCarta());
			cout << listaJugadores->toString();
			delete baraja;
			delete listaJugadores;
		

			
}

Juego::~Juego()
{
	
}
