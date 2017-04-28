#include "Calculadora.h"
#include <iostream>

using namespace std;

int main(){

    int numero1, numero2, opcion;

    cout <<"Ingrese el valor del numero1: ";
	cin >> numero1;
	cout << "\nIngrese el valor del numero2: ";
	cin >> numero2;

    Calculadora calculadora1(numero1, numero2);

	cout << "\n...// MENU //..." << endl;
	cout << "Escoja 1 para la operacion suma" <<endl;
	cout << "Escoja 2 para la operacion resta" <<endl;
	cout << "Escoja 3 para la operacion multiplicacion" <<endl;
	cout << "Escoja 4 para la operacion division" <<endl;

	cout << "\nIngrese el valor de opcion" << endl;
	cin >> opcion;

	if(opcion == 1){
        cout << "\nEl resultado es:" <<endl;
		cout << calculadora1.suma(numero1, numero2) << endl;
	}
	else if(opcion == 2){
        cout << "\nEl resultado es:" <<endl;
		cout<< calculadora1.resta(numero1, numero2) << endl;
	}
	else if(opcion == 3){
        cout << "\nEl resultado es:" <<endl;
		cout << calculadora1.multiplicacion(numero1, numero2) << endl;
	}
	else if(opcion == 4){
        if(numero2 != 0){
        cout << "\nEl resultado es:" <<endl;
		cout << calculadora1.division(numero1, numero2) << endl;
        }
        else{
            cout << "\nEscoja otro numero para el valor de numero2" << endl;
        }
    }
}

