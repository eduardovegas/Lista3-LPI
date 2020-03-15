#include "RestauranteCaseiro.h"


void RestauranteCaseiro::atualizaMesas(MesaDeRestaurante m){

    for(int i = 0; i < Mesas.size(); i++){

        if(m.num == Mesas[i].num){
            Mesas.erase(Mesas.begin() + i);
            Mesas.insert(Mesas.begin() + i, m);
            return;
        }
    }

    Mesas.push_back(m);

}

void RestauranteCaseiro::mostraMesas(){

    for(int i = 0; i < Mesas.size(); i++){

        std::cout << Mesas[i].num << std::endl;

    }

}

void RestauranteCaseiro::adicionaPedidos(Pedido p, MesaDeRestaurante m){

    for(int i = 0; i < Mesas.size(); i++){

        if(m.num == Mesas[i].num){
            Mesas[i].adicionaPedido(p);
            return;
        }
    }

    Mesas.push_back(m);
    Mesas[Mesas.size()-1].adicionaPedido(p);

}

float RestauranteCaseiro::calculaTotalRestaurante(){

    float total = 0;

    for(int i = 0; i < Mesas.size(); i++){

        total += Mesas[i].calculaTotal();

    }

    return total;
}