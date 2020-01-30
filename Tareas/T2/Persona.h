#include<string>
using namespace std;

class Persona
{
    private:
        string nombre;
        int monedas;
    public:
        Persona(string n, int c);
        string getNombre();
        int getCantidadMonedas();
        int quitarMonedas(int c);
        int sumarMonedas(int c);
};