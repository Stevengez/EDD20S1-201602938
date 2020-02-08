#include<iostream>
#include"Estudiante.h"

Estudiante *inicio, *final;
int list_size;
void addAtFirst(int id, string nombre){
    Estudiante *temp = new Estudiante(id, nombre);

    if(final == NULL){
        inicio = temp;
        final = temp;
        cout << "Agregue el primer estudiante: " << nombre << endl;
    }else{
        temp->setSiguiente(inicio);
        inicio = temp;
        cout << "Agregue un nuevo estudiante: " << nombre << endl;
    }
    list_size++;
}

Estudiante* findEstudianteById(int id){
    if(inicio == 0){
            cout << "Busque pero la lista esta vacia.";
            return 0;
    }
    
    Estudiante *temp;
    temp = inicio;

    do{
        if(temp->getId() == id){
            return temp;
        }else{
            temp = temp->getSiguiente();
        }
    }while(temp != 0);

    return 0;
}

void deleteAfterEstudiante(Estudiante *estudiante){
    estudiante->setSiguiente(NULL);
}

int main(){
    list_size = 0;
    inicio = 0;
    final = 0;

    addAtFirst(201602938,"Steven Jocol");
    addAtFirst(201515234,"Monica Aviles");
    addAtFirst(201717678,"Jose Dominguez");
    addAtFirst(201818344,"Mario Casa");
    if(findEstudianteById(201717678) != 0){
        cout << "El estudiante se llama: " << findEstudianteById(201717678)->getNombre();
    }else{
        cout << "El estudiante se llama: No encontrado.";
    }
    
    cin.ignore();
    cin.get();
    return 0;
}