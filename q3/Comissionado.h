#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    private:
        double vendasSemanais;
        double percentualComissao;
    public:
        Comissionado(std::string n, int m, int t, double vendas, double percen);
        Comissionado();
        double calcularSalario();
};



#endif