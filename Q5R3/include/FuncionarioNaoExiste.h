#ifndef FUNCIONARIONAOEXISTE_H
#define FUNCIONARIONAOEXISTE_H

#include <exception>

class FuncionarioNaoExiste : public std::exception
{
    public:
        FuncionarioNaoExiste();
        virtual ~FuncionarioNaoExiste();

    protected:

    private:
};

#endif // FUNCIONARIONAOEXISTE_H
