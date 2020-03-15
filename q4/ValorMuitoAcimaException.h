#ifndef MUITOACIMA_H
#define MUITOACIMA_H

#include <exception>

class ValorMuitoAcimaException : public std::exception
{
    public:
        const char* erro;
        ValorMuitoAcimaException(const char*);
        
};


#endif