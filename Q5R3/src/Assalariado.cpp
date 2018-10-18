#include "Assalariado.h"

Assalariado::Assalariado()
{
    //ctor
}

Assalariado::Assalariado(double salario){
    this->salario = salario;
}

double Assalariado::calculaSalario()
{
    return salario;
}

void Assalariado::setSalario(double salario)
{
    this->salario = salario;
}

Assalariado::~Assalariado()
{
    //dtor
}
