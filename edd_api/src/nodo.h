#ifndef NODO_H
#define NODO_H
#include <string>

struct estudiante{
  std::string id;
  std::string nombre;
};

class Nodo{
  public:

          //  Atributos del Nodo
          estudiante e;
          Nodo *siguiente;


          //  Metodos del Nodo
          Nodo(estudiante nuevo);
          Nodo *getSiguiente();
          void setSiguiente(Nodo *n);
          estudiante getEstudiante();
};

#endif // NODO_H
