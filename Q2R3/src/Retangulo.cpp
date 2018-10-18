#include "../include/Retangulo.h"

Retangulo::Retangulo()
{
    altura = 0;
    largura = 0;
}

Retangulo::Retangulo(float altura, float largura){
    this->altura = altura;
    this->largura = largura;
}

float Retangulo::calcularArea(){
    return altura*largura;
}

Retangulo::~Retangulo()
{
    //dtor
}
