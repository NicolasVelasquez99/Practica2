#include "GrupoPersonas.h"
#include <iostream>

using namespace std;

GrupoPersonas::GrupoPersonas(vector<Persona> people){
    personas = people;
}

vector<Persona> GrupoPersonas::getPersonas(){
    return personas;
}

void GrupoPersonas::recolectarDatos(){
    cout << "...// Datos Personas //...\n";
    for(int i=0; i<personas.size(); i++){
        cout << personas[i].getNombre() << " " << personas[i].getApellido() << endl;
    }
    cout << endl;
}

void GrupoPersonas::imprimirPersona(){
    cout << "...// Datos con salarios //...\n";
    for(int i=0; i<personas.size(); i++){
        cout << personas[i].getNombre() << " " << personas[i].getApellido() << " devenga " << personas[i].getSalario() << endl;    }
}

GrupoPersonas::~GrupoPersonas(){
}
