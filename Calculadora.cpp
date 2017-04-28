#include "Calculadora.h"
#include <math.h>

Calculadora::Calculadora(int n1, int n2){
    numero1 = n1;
    numero2 = n2;
}

int Calculadora::getNumero1(){
    return numero1;
}

int Calculadora::getNumero2(){
    return numero2;
}

int Calculadora::suma(int n1, int n2){
	 return numero1 + numero2;
 }

int Calculadora::resta(int n1, int n2){
	return numero1 - numero2;
}

int Calculadora::multiplicacion(int n1, int n2){
	return numero1 * numero2;
}

double Calculadora::division(int n1, int n2){
	if(numero2 != 0){
		return numero1 / numero2;
	}
}

Calculadora::~Calculadora(){
}
