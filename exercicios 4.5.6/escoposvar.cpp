#include <iostream>
using namespace std;
int glob = 4;

int quadruplicador (int a, int b);

int main (){
    int x;
    cin >> x;
    cout << quadruplicador(x,glob);
    
}

int quadruplicador (int a,int b){
    b = a*glob;
    if(b<10){
        glob = 40;
        b = a*glob;
    }
    return b;
}