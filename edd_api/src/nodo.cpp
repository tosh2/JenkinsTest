#include "nodo.h"

Nodo::Nodo(estudiante nuevo){
  e         = nuevo;
  siguiente = NULL;
}

Nodo * Nodo::getSiguiente(){
  return siguiente;
}

void Nodo::setSiguiente(Nodo *n){
  siguiente = n;
}

estudiante Nodo::getEstudiante(){
  return e;
}
