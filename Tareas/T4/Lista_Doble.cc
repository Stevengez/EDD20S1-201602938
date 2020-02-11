#include"TDA.h"

int main(){
    TDA *lista=new TDA();
    string a = "hola, como estas?";
    lista->addCharacterAtLast('H');
    lista->addCharacterAtLast('O');
    lista->addCharacterAtLast('L');
    lista->addCharacterAtLast('A');
    lista->addCharacterAtLast(' ');
    lista->addCharacterAtLast('C');
    lista->addCharacterAtLast('o');
    lista->addCharacterAtLast('m');
    lista->addCharacterAtLast('o');
    lista->addCharacterAtLast(' ');
    lista->addCharacterAtLast('e');
    lista->addCharacterAtLast('s');
    lista->addCharacterAtLast('t');
    lista->addCharacterAtLast('a');
    lista->addCharacterAtLast('s');
    lista->addCharacterAtLast('?');

    cout << "EL tamano acutal es: " << lista->getSize() << endl;
    if(lista->findString("Como")!=0){
        cout << "SI lo encontre y comieza en: " << lista->findString("Como")->getChar() << endl;
    }else{
        cout << "No encontre coincidencias." << endl;
    }
    
    cin.ignore();
    cin.get();
    return 0;
    
}