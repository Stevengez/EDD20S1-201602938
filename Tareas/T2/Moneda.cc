#include"TDA.h"

int main(){
    TDA estructura("Q",5000);
    estructura.addPerson("Steven",1000);
    estructura.addPerson("Henry",1000);
    estructura.addPerson("Jason",1000);
    estructura.addPerson("Patrick",1000);
    estructura.transferCoins("Jason","Patrick",100);
    estructura.transferFromBucket("Steven", 2000);

    cin.ignore();
    cin.get();
    return 0;
    
}