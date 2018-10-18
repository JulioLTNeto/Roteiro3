#include "Casa.h"

Casa::Casa()
{
    preco = 50000;
    nome = "";
}

float Casa::calculaTotal(int total){
    return total*preco;
}

Casa::~Casa()
{
    //dtor
}
