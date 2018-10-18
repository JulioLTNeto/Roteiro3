#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(double salario, int limite, std::string nomeCliente, int numero, double saldo);
        virtual ~ContaEspecial();

        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
