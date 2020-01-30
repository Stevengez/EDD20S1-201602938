#include"Persona.h"

Persona::Persona(string n, int c){
    nombre = n;
    monedas = c;
}

string Persona::getNombre(){
    return nombre;
}

int Persona::getCantidadMonedas(){
    return monedas;
}

int Persona::quitarMonedas(int c){
    monedas = monedas - c;
    return monedas;
}

int Persona::sumarMonedas(int c){
    monedas = monedas + c;
    return monedas;
}