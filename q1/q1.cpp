#include <iostream>
#include <string>

#include "IConta.cpp"
#include "Conta.cpp"
#include "ContaEspecial.cpp"

int main(){

    double val;
    Conta c1("Eduardo", 3500, 2157, 250);
    ContaEspecial c2("Jorge", 4100, 4949, 1000);

    c1.definirLimite();
    c2.definirLimite();

    std::cout << "Saldo de Eduardo: " << c1.saldo << std::endl;
    std::cout << "Quanto Eduardo vai sacar: ";
    std::cin >> val;
    c1.sacar(val);

    std::cout << "Limite de Eduardo: " << c1.limite << std::endl;
    std::cout << "Quanto Eduardo vai depositar: ";
    std::cin >> val;
    c1.depositar(val);

    std::cout << "\nSaldo de Jorge: " << c2.saldo << std::endl;
    std::cout << "Quanto Jorge vai sacar: ";
    std::cin >> val;
    c2.sacar(val);

    std::cout << "Limite de Jorge: " << c2.limite << std::endl;
    std::cout << "Quanto Jorge vai depositar: ";
    std::cin >> val;
    c2.depositar(val);

    return 0;

}