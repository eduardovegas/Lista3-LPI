#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario
{
    private:
        double salario;
    public:
        Assalariado(std::string n, int m, int t, double sal);
        Assalariado();
        double calcularSalario();
        
};


#endif