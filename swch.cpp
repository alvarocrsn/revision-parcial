#include <iostream>

using namespace std;

int main(){

string dia;

cout << "ingrese el dia: ";
cin >> dia;

if (dia == "lunes"){

switch (dia){
case 1:
    if (dia == "lunes")
    cout << "matematicas" << endl;
    break;

case 2:
    if (dia == "martes");
    cout << "programacion" << endl;
    break;


default:
    cout << "dia no valido";
    break;
}
}
return 0;
}
