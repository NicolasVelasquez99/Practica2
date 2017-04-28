/*
 * Autor: Andres Mosquera, Alexander Velasquez, Nicolas Velasquez
 * Descripcion: Programa que emula una calculadora
 * Fecha de creacion: 26 / 04 / 2017
 * Fecha de modificacion:18/04/2017
 */

#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora{
    private:
        int numero1;
        int numero2;

    public:
        Calculadora(int n1, int n2);
        int getNumero1();
        int getNumero2();

        void setNumero1(int n1);
        void setNumero2(int n2);

        int suma(int n1, int n2);
        int resta(int n1, int n2);
        int multiplicacion(int n1, int n2);
        double division(int n1, int n2);

        virtual ~Calculadora();


};

#endif // CALCULADORA_H
