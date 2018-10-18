#include "Imovel.h"

Imovel::Imovel()
{
    nome = "";
    preco = 0;
}

void Imovel::setNome(std::string nome){
    this->nome = nome;
}

void Imovel::setPreco(float preco){
    this->preco = preco;
}

std::string Imovel::getNome(){
    return nome;
}

float Imovel::getPreco(){
    return preco;
}

Imovel::~Imovel()
{
    //dtor
}
