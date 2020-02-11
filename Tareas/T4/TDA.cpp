#include"TDA.h"

TDA::TDA(){
    inicio = 0;
    final = 0;
    tdasize = 0;
}

void TDA::addCharacterAtLast(char character){
    Caracter *temp;
    temp = new Caracter(character);
    if(final==0){
        inicio = temp;
        final = temp;
    }else{
        final->setSiguiente(temp);
        temp->setAnterior(final);
        final = temp;
    }
    tdasize++;
}

void TDA::addCharacterAt(int index, char character){
    Caracter *temp = new Caracter(character);
    if(index>tdasize){
        addCharacterAtLast(character);
    }else{
        if(index<0){
            addCharacterAt(0,character);
        }else{
            Caracter *caracter_objetivo;
            caracter_objetivo = getCharAt(index);
            caracter_objetivo->getAnterior()->setSiguiente(temp);
            temp->setAnterior(caracter_objetivo->getAnterior());
            temp->setSiguiente(caracter_objetivo);
            caracter_objetivo->setAnterior(temp);
            caracter_objetivo = 0;
        }
    }
    tdasize++;
}

void TDA::addCharacterAtFirst(char character){
    addCharacterAt(0,character);
}

Caracter* TDA::getCharAt(int index){
    if(inicio == 0 || index>tdasize){
            return 0;
    }
    
    Caracter *temp;
    temp = inicio;
    
    for(int x=0;x<index;x++){
        temp = temp->getSiguiente();
    }

    return temp;
}

Caracter* TDA::findString(string c){
    Caracter *temp;
    temp = inicio;
    for(int x=0;x<tdasize;x++){
        if(temp->getChar() == c.at(0)){
            bool uncoincidence =false;
            Caracter* ttemp = temp;
            for(int x=1;x<c.length();x++){
                if(ttemp->getSiguiente() != 0){
                    ttemp = ttemp->getSiguiente();
                    if(ttemp->getChar()!=c.at(x)){
                        uncoincidence=true;
                    }
                }
            }
            if(!uncoincidence){
                return temp;
            }
        }
        temp = temp->getSiguiente();
    }
    return 0;
}

void TDA::removeLast(){
    final->getAnterior()->setSiguiente(0);
    final = final->getAnterior();
}

void TDA::removeCharacterAt(int index){
    Caracter *caracter_objetivo;
    caracter_objetivo = getCharAt(index);
    caracter_objetivo->getAnterior()->setSiguiente(caracter_objetivo->getSiguiente());
    caracter_objetivo->getSiguiente()->setAnterior(caracter_objetivo->getAnterior());
    caracter_objetivo = 0;
    tdasize--;
}

void TDA::replaceCharacterAt(int index, char new_character){
    Caracter *temp;
    temp = getCharAt(index);
    if(temp != 0 ){
        temp->setChar(new_character);
    }    
}

void TDA::replaceWord(int start, int end, char palabra){

}

int TDA::getSize(){
    return tdasize;
}