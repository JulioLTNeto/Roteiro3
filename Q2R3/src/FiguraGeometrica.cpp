#include "../include/FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    //ctor
}

void FiguraGeometrica::setNome(std::string nome){
    this->nome = nome;
}

std::string FiguraGeometrica::getNome(){
    return nome;
}

FiguraGeometrica::~FiguraGeometrica()
{
    //dtor
}
