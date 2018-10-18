#include <iostream>

#include "Imovel.h"
#include "Apartamento.h"
#include "Casa.h"

using namespace std;

int main()
{
    cout << "Polimorfismo é um conceito na programação onde um objeto pode assumir\nvários tipos, por exemplo um objeto imovel pode ser do tipo casa ou apartamento dependendo como voce vai usa-lo,\nmas esses tipos tem que ser filhos do tipo do objeto dito na definição dele, por exemplo!" << endl;

    Imovel *imovel = new Apartamento();
    imovel->setNome("Crajuba");

    cout << "\nO apartamento: " << imovel->getNome() << " de preco: " << imovel->getPreco() << "\nComprados 5 imoveis o total será: " << imovel->calculaTotal(5) << endl;

    imovel = new Casa();
    imovel->setNome("Catrina");

    cout << "\nA casa: " << imovel->getNome() << " de preco: " << imovel->getPreco() << "\nComprados 5 imoveis o total será: " << imovel->calculaTotal(5) << endl;

    return 0;
}
