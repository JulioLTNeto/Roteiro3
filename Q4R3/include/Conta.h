#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta
{
    public:
        Conta();
        Conta(std::string nomeCliente, int numero, double saldo);
        virtual ~Conta();

        void sacar(double valor);
        void depositar(double valor);

        void setNomeCliente(std::string nomeCliente);
        void setNumero(int numero);
        void setSaldo(double saldo);

        std::string getNomeCliente();
        int getNumero();
        double getSaldo();

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;

    private:
};

#endif // CONTA_H
