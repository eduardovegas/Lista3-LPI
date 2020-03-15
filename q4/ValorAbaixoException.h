#ifndef ABAIXO_H
#define ABAIXO_H

#include <exception>

class ValorAbaixoException : public std::exception
{
    public:
        const char* erro;
        ValorAbaixoException(const char*);
        
};


#endif