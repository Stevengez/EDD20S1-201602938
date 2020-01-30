#include"Persona.h"
#include<iostream>
#include<vector>

class TDA{
    private:
        vector<Persona> lista_personas;
        string simbolo;
        int size, tda_monedas;

    public:
        TDA();
        TDA(string nombre, int m);
        int getSize();
        void addPerson(string nombre, int monedas);
        void transferCoins(string a, string b, int c);
        Persona* findPersonbyName(string nombre);
        void transferFromBucket(string a, int c);
};