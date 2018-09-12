#ifndef LISTA_H
#define LISTA_H

#include <list>
#include <string>
#include "nodo.h"

class Lista{
  public:
          //  Atributos de Lista
          Nodo *raiz;

          //  Metodos de Lista
          Lista();
          void insertar(estudiante e);
          std::list<estudiante> linealizar();
};


#endif // LISTA_H
