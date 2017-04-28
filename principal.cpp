#include "Persona.h"
#include "GrupoPersonas.h"

int main(){
    vector<Persona> personas;
    Persona persona1("Alexander", "Velasquez", 35);
    Persona persona2("Andres", "Mosquera", 12);
    Persona persona3("Nicolas", "Velasquez", 67);

    personas.push_back(persona1);
    personas.push_back(persona2);
    personas.push_back(persona3);

    GrupoPersonas personal(personas);

    personal.recolectarDatos();
    personal.imprimirPersona();
}
