#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include "IConta.h"

class Conta : public IConta
{
    
    //protected:

        //double limite;

    public:
        double limite;
        
        std::string nomeCliente;
        double salarioMensal;
        int numConta;
        double saldo;

        Conta(std::string, double, int, double);
        void definirLimite();
        void sacar(double);
        void depositar(double);
        

};



#endif