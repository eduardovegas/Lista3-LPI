#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(double orca)
{
    orcamentoMaximo = orca;
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario* t){


    funcionarios.push_back(t);

}

double SistemaGerenciaFolha::calculaSalarioFuncionario(std::string name){

    for(int i = 0; i < funcionarios.size(); i++){

        if(funcionarios[i]->getNome().find(name) != std::string::npos){

            return funcionarios[i]->calcularSalario();
        }
    }

    throw new FuncionarioNaoExisteException("Funcionario nao encontrado");

}

double SistemaGerenciaFolha::calculaValorTotalFolha(){

    double valor = 0;

    for(int i = 0; i < funcionarios.size(); i++){

        valor += funcionarios[i]->calcularSalario();
    }

    if(valor < orcamentoMaximo){

        return valor;
    
    }else
    
    throw new OrcamentoEstouradoException("Valor excedeu o orcamento maximo");
    

}