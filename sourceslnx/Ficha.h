#ifndef __FICHA__H__
#define __FICHA__H__
/// class Ficha - 
class Ficha {
  // Attributes
protected:
  char etiqueta;
  char simbolo;
  // Operations
public:
  Ficha ();
  Ficha (char nuevoSimbolo, char nuevaEtiqueta);
  char getSimbolo ();
  char getEtiqueta ();
  void setSimbolo (char nuevoSimbolo);
  void intercambiarSimbolos (Ficha *otraFicha);
  void dibujarse ();
};
#endif
