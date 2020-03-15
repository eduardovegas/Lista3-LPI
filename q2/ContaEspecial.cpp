#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nome, double salario, int numero, double sld)
    : Conta(nome, salario, numero, sld)
{

}

void ContaEspecial::definirLimite(){

    limite = 3*salarioMensal;
}