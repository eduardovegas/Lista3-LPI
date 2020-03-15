#include "Comissionado.h"

Comissionado::Comissionado(std::string n, int m, int t, double vendas, double percen)
 : Funcionario(n, m, t)
{

    vendasSemanais = vendas;
    percentualComissao = percen;

}

Comissionado::Comissionado()
    : Funcionario(3)
{
    vendasSemanais = 0;
    percentualComissao = 0;
}

double Comissionado::calcularSalario(){

    double valor = 0;

    valor = ((vendasSemanais * percentualComissao)/100.00) * 4; // um mes
    return valor + 1700; // + salario base
}