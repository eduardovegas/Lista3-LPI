#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <iostream>
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:

        ContaEspecial(std::string, double, int, double);
        void definirLimite();

};


#endif