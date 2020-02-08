#include"Estudiante.h"

Estudiante::Estudiante(int id, string nombre){
    this->id=id;
    this->nombre = nombre;
    this->siguiente = 0;
}

void Estudiante::setSiguiente(Estudiante *siguiente){
    this->siguiente = siguiente;
}

Estudiante* Estudiante::getSiguiente(){
    return siguiente;
}

string Estudiante::getNombre(){
    return nombre;
}

int Estudiante::getId(){
    return id;
}