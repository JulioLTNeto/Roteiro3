#include "Conta.h"

Conta::Conta(){
    nomeCliente = "";
    numeroConta = "";
    salarioMensal = 0;
    saldo = 0;
    limite = 0;
}

Conta::Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo){
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->salarioMensal = salarioMensal;
    this->saldo = saldo;
}

Conta::~Conta(){
}

void Conta::definirLimite(){
    limite = 2*salarioMensal;
}

void Conta::sacar(double valor){
    saldo = saldo - valor;
}

void Conta::depositar(double valor){
    saldo = saldo + valor;
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroConta(std::string numeroConta){
    this->numeroConta = numeroConta;
}

void Conta::setSalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}

void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}

void Conta::setLimite(double limite){
    this->limite = limite;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

std::string Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}
