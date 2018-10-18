#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"
#include <string>

class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(double salario, int limite, std::string nomeCliente, int numero, double saldo);
        virtual ~ContaCorrente();

        void definirLimite();

        void setSalario(double salario);
        void setLimite(int limite);

        double getSalario();
        int getLimite();

    protected:
        double salario;
        int limite;

    private:
};

#endif // CONTACORRENTE_H
