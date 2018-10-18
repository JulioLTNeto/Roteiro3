#include "../include/Circulo.h"

Circulo::Circulo()
{
    raio = 0;
}

Circulo::Circulo(float raio){
    this->raio = raio;
}

float Circulo::calcularArea(){
    return 3.14159265359 * (raio*raio);
}

Circulo::~Circulo()
{
    //dtor
}
