#ifndef __JUEGO_H__
#define __JUEGO_H__
/// class Juego - 
#include <iostream>
using namespace std;

class Juego {
  // Attributes
protected:
  string nombreJugador;
  int puntaje;
  int maxMovimientos;
  // Operations
public:
  //Juego (const char *nuevoNombre, int nuevoMaximo);
  Juego (string, int nuevoMaximo);
  void aumentarPuntaje (int nuevoPuntaje);
  int reducirMovimientos ();
  void mostrarInformacion ();
  bool verificarFinal ();
};
#endif
