#ifndef OEEXCEPTION_H
#define OEEXCEPTION_H

#include <exception>

class OrcamentoEstouradoException : public std::exception
{

    public:
        const char* erro;
        OrcamentoEstouradoException(const char*);
    
};

#endif