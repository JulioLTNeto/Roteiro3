#include "Poupanca.h"

Poupanca::Poupanca()
{
    //ctor
}

Poupanca::Poupanca(int variacao, double taxaRendimento, std::string nomeCliente, int numero, double saldo)
{
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}

double Poupanca::render()
{
    if(variacao == 1){
        return taxaRendimento * 0.05;
    }
    else if(variacao == 51){
        return taxaRendimento;
    }
    else{
        return (saldo * taxaRendimento);
    }
}

void Poupanca::setVariacao(int variacao)
{
    this->variacao = variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento)
{
    this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao()
{
    return variacao;
}

double Poupanca::getTaxaRendimento()
{
    return taxaRendimento;
}

Poupanca::~Poupanca()
{
    //dtor
}
