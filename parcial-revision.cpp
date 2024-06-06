/// 30 años biciestos: 2000 -> 2004 2008 2012 ... 2120
/// año / 4 no por 100 a menos que sea divisible por 400

/*
#include <iostream>

using namespace std;

int main(){

    int anio;
    cout << "ingrese anio ";
    cin >> anio;

    /// hay que repetir 30 veces algo
    /// sumarle 1 al año solo si es biciesto, para esto en vez de i++ es  -> anio++

    for(int i = 0; i <30; anio++){
            if(anio % 4 == 0 && anio % 100 !=0 || (anio % 400 ==0)){

            cout << anio << endl;


        }
    }

    return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;

    // Repetir 30 veces
    for (int i = 0; i < 30; i++) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            cout << anio << endl;
        }
        anio++; // Incrementar el año
    }

    return 0;
}
*/

#include<iostream>
#include<string>
#include <ctype.h>

using namespace std;

int iterador(int letras, string cadena){

    int contador = 0;
    char ch;

    for(int i = 0; i <= letras; i++){
        ch = tolower(cadena[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            contador += 1;
        }
    }

    return contador;

}

int main(){

    int longitud;
    string cadena;

    cout << "Ingrese una cadena de texto para contar sus vocales: ";
    cin >> cadena;

    longitud = cadena.size();

    int contador = iterador(longitud, cadena);

    cout << contador << endl;

    return 0;
}

