#include "Funcionario.h"

Funcionario::Funcionario(std::string n, int m, int t)
{
    nome = n;
    matricula = m;
    tipo = t;
}

Funcionario::Funcionario(int t){

    tipo = t;
}

std::string Funcionario::getNome(){

    return nome;
}

int Funcionario::getTipo(){

    return tipo;
}