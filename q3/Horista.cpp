#include "Horista.h"

Horista::Horista(std::string n, int m, int t, double salH, double horas)
    : Funcionario(n, m, t)
{
    salarioPorHora = salH;
    horasTrabalhadas = horas;
}

Horista::Horista()
    : Funcionario(2)
{
    salarioPorHora = 0;
    horasTrabalhadas = 0;
}

double Horista::calcularSalario(){

    double valor = 0;
    double horasExtras = 0;

    if(horasTrabalhadas > 40){
        horasExtras = horasTrabalhadas - 40;
        valor = (salarioPorHora * 40.0) + ((salarioPorHora*1.5) * horasExtras);
        return valor*4; // um mes 
    }

    valor = salarioPorHora * horasTrabalhadas;
    return valor*4; // um mes
}