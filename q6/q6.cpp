#include "RestauranteCaseiro.h"
#include "RestauranteCaseiro.cpp"
#include <iostream>

int main(){

    MesaDeRestaurante M1(1);
    MesaDeRestaurante M2(2);
    MesaDeRestaurante M3(3);

    Pedido P1(22, 1, 29.90, "Aquele filé de frango");
    Pedido P2(10, 2, 5.50, "Duas coca");

    RestauranteCaseiro R1;

    M1.adicionaPedido(P1);

    R1.atualizaMesas(M1);
    R1.atualizaMesas(M2);
    R1.atualizaMesas(M3);

    //R1.mostraMesas();
    std::cout << "Total: " << R1.calculaTotalRestaurante() << std::endl << std::endl;

    R1.adicionaPedidos(P2, M2);
    M1.adicionaPedido(P2);

    R1.atualizaMesas(M1);

    std::cout << "Total: " << R1.calculaTotalRestaurante() << std::endl << std::endl;

    M1.zeraPedidos();
    R1.atualizaMesas(M1);

    std::cout << "Total: " << R1.calculaTotalRestaurante() << std::endl << std::endl;

    //R1.mostraMesas();

    return 0;

    
}