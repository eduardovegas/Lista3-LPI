#include "Pedido.h"

Pedido::Pedido(){

    numero = 0;
    quantidade = 0;
    preco = 0;
    descricao = "\0";
}

Pedido::Pedido(int n, int q, float p, std::string d){

    numero = n;
    quantidade = q;
    preco = p;
    descricao = d;

}