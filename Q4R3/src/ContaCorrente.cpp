#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    //ctor
}

ContaCorrente::ContaCorrente(double salario, int limite, std::string nomeCliente, int numero, double saldo)
{
    this->salario = salario;
    this->limite = limite;
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}

void ContaCorrente::definirLimite()
{
    limite = 2*salario;
}

void ContaCorrente::setSalario(double salario)
{
    this->salario = salario;
}

void ContaCorrente::setLimite(int limite)
{
    this->limite = limite;
}

double ContaCorrente::getSalario()
{
    return salario;
}

int ContaCorrente::getLimite()
{
    return limite;
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}
