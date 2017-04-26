/*
 * Autor: Alexander Velasquez - 1556089
 * Descripcion: con el uso de punteros se cambia el valor de dos variables
 * fecha de creacion: 26/04/17
 * fecha de ultima modificacion: 26/04/17
 */
 #include <iostream>
 #include <math.h>
 
 using namespace std;
	
	void modificar(int * ptr){
		*ptr = pow(double(*ptr),2);	
	}
	
 int main(){
	 int * ptrVariable = 0;
	 int entero1 = 100;
	 ptrVariable=&entero1;
	 
	 modificar(ptrVariable);
	 
	 int entero2 = 300;
	 ptrVariable=&entero2;
	 
	 modificar(ptrVariable);
	 
	 cout << entero1 << "\n" << entero2;
 }    
       
