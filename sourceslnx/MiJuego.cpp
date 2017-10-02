#include "MiJuego.h"

MiJuego::MiJuego (string nom, int mvm):Juego(nom, mvm) {
}

void MiJuego::mostrarInformacion () {
	cout << "Mostrando info del Juego Candy";
	cout << endl;

	cout << puntaje << ", " << nombreJugador << ", " << maxMovimientos;
	cout << endl;
}
