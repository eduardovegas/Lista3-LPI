#ifndef FNEEXCEPTION_H
#define FNEEXCEPTION_H

#include <exception>

class FuncionarioNaoExisteException : public std::exception
{

public:
    const char* erro;
    FuncionarioNaoExisteException(const char*);
    
};

#endif