#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
        string nombre;
        string apellido;
        int salario;

    public:
        Persona(string nom, string apell, int salar);
        string getNombre();
        string getApellido();
        int getSalario();

        virtual ~Persona();
};

#endif
