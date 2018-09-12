// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest

#include "edd_api.h"

Lista *listadoEstudiantes = new Lista();

std::string edd_api::insertarEstudiante(estudianteSerial e){
  std::string response = "true";

  estudiante nuevoEstudiante;

  nuevoEstudiante.id = e.id;
  nuevoEstudiante.nombre = e.nombre;

  listadoEstudiantes->insertar(nuevoEstudiante);

  return response;
}

std::string edd_api::getEstudiante(const std::string& id){
  std::string response = "El estudiante buscado es: ";
  return response;
}

std::list<estudianteSerial> edd_api::getEstudiantes(){

  Nodo *pivote = listadoEstudiantes->raiz;

  std::list<estudianteSerial> response;

  while(pivote){
    estudianteSerial tmp;
    tmp.id      = pivote->e.id;
    tmp.nombre  = pivote->e.nombre;
    response.push_back(tmp);
    pivote = pivote->getSiguiente();
  }

  return response;
}