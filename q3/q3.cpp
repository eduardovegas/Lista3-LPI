#include <iostream>

#include "SistemaGerenciaFolha.cpp"
#include "Funcionario.cpp"
#include "Assalariado.cpp"
#include "Horista.cpp"
#include "Comissionado.cpp"
#include "FuncionarioNaoExisteException.cpp"
#include "OrcamentoEstouradoException.cpp"

int main(){

    SistemaGerenciaFolha System(10000);
    Funcionario* f1 = new Assalariado("Karla", 678, 1, 3900);
    Funcionario* f2 = new Horista("Jose", 999, 2, 15, 50);
    Funcionario* f3 = new Comissionado("Maria", 535, 3, 400, 60);
    Funcionario* f4 = new Assalariado("Paulo", 222, 1, 2800);

    System.setFuncionarios(f1);
    System.setFuncionarios(f2);
    System.setFuncionarios(f3);
    System.setFuncionarios(f4);

    try{

        System.calculaSalarioFuncionario("Karla");
        std::cout << "Salario de Karla: " << System.calculaSalarioFuncionario("Karla") << std::endl;

    }catch(FuncionarioNaoExisteException* e){

        std::cout << e->erro << std::endl;
    }

    try{

        System.calculaSalarioFuncionario("Jose");
        std::cout << "Salario de Jose: " << System.calculaSalarioFuncionario("Jose") << std::endl;

    }catch(FuncionarioNaoExisteException* e){

        std::cout << e->erro << std::endl;
    }

    try{

        System.calculaSalarioFuncionario("Ialisson");
        std::cout << "Salario de Ialisson: " << System.calculaSalarioFuncionario("Ialisson") << std::endl;

    }catch(FuncionarioNaoExisteException* e){

        std::cout << e->erro << std::endl;
    }

    try{

        System.calculaSalarioFuncionario("Maria");
        std::cout << "Salario de Maria: " << System.calculaSalarioFuncionario("Maria") << std::endl;

    }catch(FuncionarioNaoExisteException* e){

        std::cout << e->erro << std::endl;
    }

    try{

        System.calculaSalarioFuncionario("Paulo");
        std::cout << "Salario de Paulo: " << System.calculaSalarioFuncionario("Paulo") << std::endl;

    }catch(FuncionarioNaoExisteException* e){

        std::cout << e->erro << std::endl;
    }

    getchar();


    try{

        System.calculaValorTotalFolha();
        std::cout << "Valor total da folha: " << System.calculaValorTotalFolha() << std::endl;

    }catch(OrcamentoEstouradoException* e){

        std::cout << e->erro << std::endl;
    }
    
    getchar();

}