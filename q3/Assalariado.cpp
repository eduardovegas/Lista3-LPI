#include "Assalariado.h"

Assalariado::Assalariado(std::string n, int m, int t, double sal)
    : Funcionario(n, m, t)
{
    salario = sal;
}

Assalariado::Assalariado()
    : Funcionario(1)
{

    salario = 0;

}

double Assalariado::calcularSalario(){

    return salario;

}