#include "Horista.h"

Horista::Horista()
{
    //ctor
}

Horista::Horista(double salarioPorHora, double horasTrabalhadas){
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::calculaSalario(){
    return horasTrabalhadas*salarioPorHora;
}

void Horista::setSalarioPorHora(double salarioPorHora){
    this->salarioPorHora = salarioPorHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::getSalarioPorHora(){
    return salarioPorHora;
}

double Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

Horista::~Horista()
{
    //dtor
}
