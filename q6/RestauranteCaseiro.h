#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"
#include "MesaDeRestaurante.cpp"
#include <vector>

class RestauranteCaseiro
{
private:

    std::vector <MesaDeRestaurante> Mesas;

public:

    void atualizaMesas(MesaDeRestaurante m);
    void mostraMesas();
    void adicionaPedidos(Pedido p, MesaDeRestaurante m);
    float calculaTotalRestaurante();

};




#endif