#include <iostream>

#include "TestaValidaNumero.cpp"
#include "ValorAbaixoException.cpp"
#include "ValorAcimaException.cpp"
#include "ValorMuitoAcimaException.cpp"

int main(){

    TestaValidaNumero t1 = TestaValidaNumero();
    int num = 0;

    std::cin >> num;
    
    try{

        t1.validaNumero(num);
        std::cout << "0 erros" << std::endl;

    }catch(ValorAbaixoException* e){
        
        std::cout << e->erro << std::endl;

    }
    catch(ValorAcimaException* f){
        
        std::cout << f->erro << std::endl;
        
    }
    catch(ValorMuitoAcimaException* g){
        
        std::cout << g->erro << std::endl;
        
    }

    return 0;
    
}