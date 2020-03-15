#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>

class Pedido
{
public:
    
    int numero;
    int quantidade;
    float preco;
    std::string descricao;

public:

    Pedido();
    Pedido(int n, int q, float p, std::string d);
    
};



#endif