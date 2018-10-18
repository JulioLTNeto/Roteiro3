#include "Apartamento.h"

Apartamento::Apartamento()
{
    preco = 15000;
    nome = "";
}

float Apartamento::calculaTotal(int total){
    return total*preco;
}

Apartamento::~Apartamento()
{

}
