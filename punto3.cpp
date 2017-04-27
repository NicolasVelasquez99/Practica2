/*
 * Descripcion: Problema4
 * Nombre: Nicolas Velasquez
 * Fecha de Creacion: 1-03-2017
 * Fecha de Ult de modificacion: 07-04-2017
 * 
*/

#include <iostream>
#include <string>

using namespace std;



void recolectarDatos(string** arrayDatosPersona){
	 
	arrayDatosPersona = new string* [3];
		for(int i=0; i<3; i++){
				arrayDatosPersona[i] = new string[2];
			}
		
		string nombres;
		string apellidos;
		for(int i=0; i<3; i++){
			cout <<"nombre ";
			cin >> arrayDatosPersona[i][0];
				
			cout <<"apellidos ";
			cin >> arrayDatosPersona[i][1];
				
		}
}
	
void recolectarSalariosPersona(string** &arrayDatosPersona, double* &salariosPersona){
	
	salariosPersona = new double[3];
	for(int i=0; i<3; i++){
		
		cout<<"Ingrese el salario de la persona " << arrayDatosPersona[i][0] <<" "<< arrayDatosPersona[i][1] <<  endl;
		cin>>salariosPersona[i];
		
	}
	
	
	
}

void imprimirResultados(string** &arrayDatosPersona, double* &salariosPersona){
	
	for(int i=0; i<3; i++){
		
		cout<< "La persona "<< arrayDatosPersona[i][0] << arrayDatosPersona[i][1] << salariosPersona[i] << endl;
	}
	
}




int main(){
	
	string** arrayDatosPersona;
	double* salarios;
	
	recolectarDatos(arrayDatosPersona);
	recolectarSalariosPersona(arrayDatosPersona, salarios);
	imprimirResultados(arrayDatosPersona, salarios);
	
	
	
}
