#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(int n){

    num = n;

}

void MesaDeRestaurante::adicionaPedido(Pedido p){

    for(int i = 0; i < Pedidos.size(); i++){

        if(p.numero == Pedidos[i].numero){
            Pedidos[i].quantidade += p.quantidade;
            return;
        }

    }

    Pedidos.push_back(p);

}

void MesaDeRestaurante::zeraPedidos(){

    for(int i = 0; i < Pedidos.size(); i++){

        //Pedidos[i].quantidade = 0;
        Pedidos.erase(Pedidos.begin());

    }
}

float MesaDeRestaurante::calculaTotal(){

    float valor = 0;

    for(int i = 0; i < Pedidos.size(); i++){

        valor += Pedidos[i].preco*Pedidos[i].quantidade;

    }

    return valor;

}