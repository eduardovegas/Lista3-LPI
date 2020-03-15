#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"
#include "Pedido.cpp"
#include <vector>

class MesaDeRestaurante
{
private:

    std::vector <Pedido> Pedidos;

public:

    int num;
    MesaDeRestaurante(int n);
    void adicionaPedido(Pedido p);
    void zeraPedidos();
    float calculaTotal();

};



#endif
