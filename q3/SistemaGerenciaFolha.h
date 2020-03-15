#ifndef SISTEMA_H
#define SISTEMA_H

#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include "vector"

class SistemaGerenciaFolha
{   

    private:
        std::vector<Funcionario*> funcionarios;
        double orcamentoMaximo;

    public:
        
        SistemaGerenciaFolha(double orcamento);
        void setFuncionarios(Funcionario*);
        double calculaValorTotalFolha();
        double calculaSalarioFuncionario(std::string name);
        
};



#endif