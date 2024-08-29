#include <iostream>
using namespace std;

double calcularAreaRetangulo(double x, double y);

int main(){
    double x,y;
    cin >> x >> y;
    cout << calcularAreaRetangulo(x,y);
}

double calcularAreaRetangulo(double x, double y){
    x = x*y;
    return x;
}