#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario
{
    private:
        double salarioPorHora;
        double horasTrabalhadas;
    public:
        Horista(std::string n, int m, int t, double salH, double horas);
        Horista();
        double calcularSalario();
        
};



#endif