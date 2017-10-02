#ifndef __TABLERO_H__
#define __TABLERO_H__

#include "Ficha.h"
#include "GeneradorSimbolos.h"
#include "GeneradorEtiquetas.h"

/// class Tablero - 
class Tablero {
  // Attributes
protected:
  int nFilas;
  int nCols;
  Ficha **matriz;
  // Operations
public:
  Tablero (int filas, int cols);
  void inicializarse (GeneradorSimbolos gs, GeneradorEtiquetas ge);
  void dibujarse ();
  Ficha * obtenerFicha (char etiqueta);
  Ficha * obtenerFicha (int posFila, int posColumna);
  Ficha * buscarTripletaFilas (int &posFila, int &posColumna);
  Ficha * buscarTripletaColumnas (int &posFila, int &posColumna);
  void reemplazarTripletaFilas (int posFila, int posColumna, GeneradorSimbolos genSmb);
  void reemplazarTripletaColumnas (int posFila, int posColumna, GeneradorSimbolos genSmb);
};
#endif
