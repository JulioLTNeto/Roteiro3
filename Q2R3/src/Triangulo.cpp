#include "../include/Triangulo.h"

Triangulo::Triangulo()
{
    altura = 0;
    largura = 0;
}

Triangulo::Triangulo(float altura, float largura){
    this->altura = altura;
    this->largura = largura;
}

float Triangulo::calcularArea(){
    return (altura*largura)/2;
}

Triangulo::~Triangulo()
{
    //dtor
}
