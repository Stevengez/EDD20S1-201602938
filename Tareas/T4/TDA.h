#include"Caracter.h"
#include<iostream>

class TDA {
    private:
        int tdasize;
        Caracter *inicio, *final;
    public:
        TDA();
        void addCharacterAtLast(char character);
        void addCharacterAtFirst(char character);
        void addCharacterAt(int index, char character);
        Caracter* getCharAt(int index);
        Caracter* findString(string c);
        void removeLast();
        void removeCharacterAt(int index);
        void replaceCharacterAt(int index, char new_character);
        void replaceWord(int start, int end, char palabra);
        int getSize();
};