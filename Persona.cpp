#include "Persona.h"

Persona::Persona(string nom, string apell, int salar){
    nombre = nom;
    apellido = apell;
    salario = salar;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getApellido(){
    return apellido;
}

int Persona::getSalario(){
    return salario;
}

Persona::~Persona(){
}
