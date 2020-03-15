#include "Conta.h"

Conta::Conta(std::string nome, double salario, int numero, double sld)
{

    nomeCliente = nome;
    salarioMensal = salario;
    numConta = numero;
    saldo = sld;

}

void Conta::definirLimite(){

    limite = 2*salarioMensal;
}

void Conta::sacar(double valor){

    if(saldo - valor < 0.0){

        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo = saldo - valor;

    std::cout << "Saldo realizado com sucesso" << std::endl;
}

void Conta::depositar(double valor){

    if(saldo + valor > limite){

        std::cout << "Ultrapassa o limite" << std::endl;
        return;
    }

    saldo = saldo + valor;

    std::cout << "Deposito realizado com sucesso" << std::endl;
}