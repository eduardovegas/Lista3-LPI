#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

class Funcionario
{
    protected:
        std::string nome;
        int matricula;
        int tipo;
    public:
        Funcionario(int t);
        Funcionario(std::string n, int m, int t);
        virtual double calcularSalario() = 0;
        std::string getNome();
        int getTipo();

};  


#endif