#include"Caracter.h"

Caracter::Caracter(char character){
    this->character=character;
    this->anterior = 0;
    this->siguiente = 0;
}

char Caracter::getChar(){
    return character;
}

void Caracter::setChar(char character){
    this->character=character;
}

Caracter* Caracter::getSiguiente(){
    return siguiente;
}

Caracter* Caracter::getAnterior(){
    return anterior;
}

void Caracter::setSiguiente(Caracter* siguiente){
    this->siguiente=siguiente;
}

void Caracter::setAnterior(Caracter* anterior){
    this->anterior=anterior;
}

