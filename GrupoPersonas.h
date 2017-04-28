#ifndef GRUPOPERSONAS_H
#define GRUPOPERSONAS_H

#include "Persona.h"
#include <vector>

class GrupoPersonas{
    private:
        vector<Persona> personas;

    public:
        GrupoPersonas(vector<Persona> people);
        vector<Persona> getPersonas();

        void recolectarDatos();
        void imprimirPersona();

        virtual ~GrupoPersonas();

};

#endif
