#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    int numero;
    cout << "Ingresa el tamano de la matriz" << endl;
    cin>>numero;
    vector<vector<string>> matrix;
    
    
    for(int x=0;x<=numero;x++){
        vector<string> temp;
        for(int y=0;y<=numero;y++){
            if(x==0 || x==numero){
                temp.push_back("1");
            }else if(y==0 || y ==numero){
                temp.push_back("1");
            }else{
                temp.push_back(" ");
            }
        }
        matrix.push_back(temp);
    }

    for(int x=0;x<matrix.size();x++){
        for(int y=0;y<matrix[x].size();y++){
            cout << "[" << matrix[x][y] << "]";
        }
        cout << endl;
    }
    cin.ignore();
    cin.get();
    return 0;
}