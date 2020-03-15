#ifndef SNDEXCEPTION_H
#define SNDEXCEPTION_H

#include <exception>

class SaldoNaoDisponivelException : public std::exception
{
    public:
        const char* erro;
        SaldoNaoDisponivelException(const char*);
    
};


#endif