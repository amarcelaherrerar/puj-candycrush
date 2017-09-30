#ifndef __GENERADORSIMBOLOS_H__
#define __GENERADORSIMBOLOS_H__

#include <iostream>
using namespace std;

/// class GeneradorSimbolos - 
class GeneradorSimbolos {
  // Attributes
protected:
  	string cadenaSimbolos;
  // Operations
public:
  GeneradorSimbolos (string nuevosSimbolos);
  char nextSimbolo ();
};
#endif
