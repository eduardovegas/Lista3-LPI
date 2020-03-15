#ifndef ACIMA_H
#define ACIMA_H

#include <exception>

class ValorAcimaException : public std::exception
{
    public:
        const char* erro;
        ValorAcimaException(const char*);
        
};


#endif