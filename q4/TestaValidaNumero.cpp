#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero(){

}

void TestaValidaNumero::validaNumero(int num){

    if(num <= 0)
        throw new ValorAbaixoException("Valor menor ou igual a 0");

    if(num > 100 && num < 1000)
        throw new ValorAcimaException("Valor acima de 100 e menor que 1000");

    if(num >= 1000)
        throw new ValorMuitoAcimaException("Valor maior ou igual a 1000");

}