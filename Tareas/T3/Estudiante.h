#include<string>
using namespace std;

class Estudiante {
    private:
        int id;
        string nombre;
        Estudiante *siguiente;
    public:
        Estudiante(int id, string nombre);
        void setSiguiente(Estudiante *siguiente);
        Estudiante* getSiguiente();
        string getNombre();
        int getId();
};