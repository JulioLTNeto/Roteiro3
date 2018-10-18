#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(int variacao, double taxaRendimento, std::string nomeCliente, int numero, double saldo);
        virtual ~Poupanca();

        double render();

        void setVariacao(int variacao);
        void setTaxaRendimento(double taxaRendimento);

        int getVariacao();
        double getTaxaRendimento();

    protected:

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
