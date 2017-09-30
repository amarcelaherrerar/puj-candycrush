#ifndef __GENERADORETIQUETAS_H__
#define __GENERADORETIQUETAS_H__

#include <iostream>
using namespace std;

/// class GeneradorEtiquetas - 
class GeneradorEtiquetas {
	  // Attributes
	protected:
	  string cadenaEtiquetas;
	  int contadorEtiquetas;
	  // Operations
	public:
	  GeneradorEtiquetas (string nuevasEtiquetas);
	  char nextEtiqueta ();
};
#endif
