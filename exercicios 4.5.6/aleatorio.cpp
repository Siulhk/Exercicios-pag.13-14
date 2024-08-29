#include <iostream>
#include <time.h>
using namespace std;

int gerarNumeroAleatorio();

int main(){
    cout << gerarNumeroAleatorio();
}

int gerarNumeroAleatorio(){
    int n;
    srand (time(NULL));
    n = rand() % 100+1;
    return n;
}