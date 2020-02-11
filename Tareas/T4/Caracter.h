#include<string>
using namespace std;

class Caracter {
    private:
        char character;
        Caracter *anterior, *siguiente;
    public:
        Caracter(char character);
        char getChar();
        void setChar(char character);
        Caracter* getSiguiente();
        Caracter* getAnterior();
        void setSiguiente(Caracter* siguiente);
        void setAnterior(Caracter* anterior);
};