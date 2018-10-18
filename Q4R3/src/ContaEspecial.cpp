#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::ContaEspecial(double salario, int limite, std::string nomeCliente, int numero, double saldo)
{
    this->salario = salario;
    this->limite = limite;
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}

void ContaEspecial::definirLimite(){
    limite = 4*salario;
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}
