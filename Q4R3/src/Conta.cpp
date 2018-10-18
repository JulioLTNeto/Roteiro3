#include "Conta.h"

#include <iostream>

Conta::Conta()
{
    //ctor
}

Conta::Conta(std::string nomeCliente, int numero, double saldo)
{
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}

void Conta::sacar(double valor)
{
    if(saldo-valor>=0){
        saldo = saldo-valor;
    }else{
        std::cout << "Saldo Indisponivel" << std::endl;
    }
}

void Conta::depositar(double valor)
{
    saldo = saldo+valor;
}

void Conta::setNomeCliente(std::string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

void Conta::setNumero(int numero)
{
    this->numero = numero;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

Conta::~Conta()
{
    //dtor
}
