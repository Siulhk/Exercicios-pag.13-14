#include <iostream>
#include <time.h>
using namespace std;

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int main(){
    srand (time(NULL));
    int x, num;
    bom_dia();
    cout << aleat() << endl;
    x = aleat();
    num += dobro(x);
    if (dobro(x) > dobro(aleat())){
        mostra_dobro(x);
    }
}

void bom_dia(){
    cout << "Bom dia" << endl;
}
int aleat(){
    return rand() % 100 + 1;
}
int dobro(int x){
    return x*2;
}
void mostra_dobro(int x){
    cout << x << endl;
}