#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::Comissionado(double vendasSemanais, double percentualComissao){
    this->vendasSemanais = vendasSemanais;
    this->percentualComissao = percentualComissao;
}

double Comissionado::calculaSalario(){
    return percentualComissao*vendasSemanais;
}

void Comissionado::setVendasSemanais(double vendasSemanais){
    this->vendasSemanais = vendasSemanais;
}

void Comissionado::setPercentualComissao(double percentualComissao){
    this->percentualComissao = percentualComissao;
}

double Comissionado::getVendasSemanais(){
    return vendasSemanais;
}

double Comissionado::getPercentualComissao(){
    return percentualComissao;
}

Comissionado::~Comissionado()
{
    //dtor
}
