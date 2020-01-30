#include"TDA.h"

TDA::TDA(){
    simbolo = "Q";
    tda_monedas = 10000;
    size = 0;
    cout << "Se creo una moneda del tipo: " << simbolo << " , con una cantidad inicial de: " << tda_monedas << endl;
}

TDA::TDA(string simbolo_moneda, int m){
    simbolo = simbolo_moneda;
    tda_monedas = m;
    size = 0;
    cout << "Se creo una moneda del tipo : " << simbolo << " , con una cantidad inicial de: " << tda_monedas << endl;
}

int TDA:: getSize(){
    return size;
}

void TDA::addPerson(string nombre, int monedas){
    Persona *nuevo;
    if((tda_monedas-monedas)>0){
        tda_monedas-=monedas;
        nuevo = new Persona(nombre, monedas);
        lista_personas.push_back(*nuevo);
        size++;
        cout << nombre << " fue agregado correctamente con: " << simbolo << ". " << monedas << endl;
    }else{
        cout<<"No se puede agregar esa cantidad de monedas, solo quedan: " << tda_monedas << endl;
    }
}

void TDA::transferFromBucket(string a, int c){
    if(tda_monedas-c>0){
        tda_monedas-=c;    
        Persona *temp;
        temp = findPersonbyName(a);
        if(temp != NULL){
            cout << "Transfiriendo "<< simbolo << ". " << c << " de la reserva a: " << a << endl;
            cout << a << " Ahora tiene: " << simbolo << ". " << temp->sumarMonedas(c);
        }else{
            cout << "No se encontro a esta persona.";
        }
    }else{
        cout << "No es posible transferir esa cantidad de monedas, no hay suficientes." << endl;
        cout << "Cantidad actual en la reserva: " << simbolo << ". " << tda_monedas;
    }
}

Persona* TDA::findPersonbyName(string nombre){
    for(int x=0;x<lista_personas.size();x++){
        if(lista_personas[x].getNombre() == nombre){
            return &lista_personas[x];
        }
    }
    return NULL;
}

void TDA::transferCoins(string a, string b, int c){
    Persona *pa,*pb;
    bool ba=false,bb=false;
    for(int x=0;x<lista_personas.size();x++){
        if(lista_personas[x].getNombre() == a){
            pa = &lista_personas[x];
            ba = true;
        }
        if(lista_personas[x].getNombre() == b){
            pb = &lista_personas[x];
            bb =true;
        }
    }
    
    if(ba && bb){
        cout << "Transfiriendo " << simbolo << ". " << c << " de: " << a << " hacia: "<< b << endl;
        pa->quitarMonedas(c);
        pb->sumarMonedas(c);
        cout << pa->getNombre() << " ahora tiene: " << simbolo << ". " << pa->getCantidadMonedas() << endl;
        cout << pb->getNombre() << " ahora tiene: " << simbolo << ". " << pb->getCantidadMonedas() << endl;
    }else{
        cout<< "No se encontro a: ";
        if(!ba){ cout << a; }
        cout << "," ;
        if(!bb){ cout << b; }
        cout << " entre las personas agregadas.";
    }
}