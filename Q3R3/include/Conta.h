#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>

class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo);
        virtual ~Conta();

        void definirLimite();
        void sacar(double valor);
        void depositar(double valor);

        void setNomeCliente(std::string nomeCliente);
        void setNumeroConta(std::string numeroConta);
        void setSalarioMensal(double salarioMensal);
        void setSaldo(double saldo);
        void setLimite(double limite);

        std::string getNomeCliente();
        std::string getNumeroConta();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();

    protected:
        std::string nomeCliente;
        std::string numeroConta;
        double salarioMensal;
        double saldo;
        double limite;

    private:
};

#endif // CONTA_H
