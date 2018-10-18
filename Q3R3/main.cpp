#include <iostream>

#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta conta = Conta("Julio Leite Tavares Neto", "00000000", 1500, 300);
    ContaEspecial contaEspecial = ContaEspecial();

    contaEspecial.setNomeCliente("Julio");
    contaEspecial.setSalarioMensal(1500);
    contaEspecial.setSaldo(500);

    cout << "----------Conta Comum----------\n" << endl;

    cout << "Valor atual: " << conta.getSaldo() << endl;

    conta.depositar(500);
    cout << "Valor ao depositar 500 reais: " << conta.getSaldo() << endl;

    conta.sacar(700);
    cout << "Valor ao sacar 500 reais: " << conta.getSaldo() << endl;

    conta.definirLimite();
    cout << "Valor limite: " << conta.getLimite() << endl;

    cout << "\n----------Conta Especial----------\n" << endl;

    cout << "Valor atual: " << contaEspecial.getSaldo() << endl;

    contaEspecial.depositar(500);
    cout << "Valor ao depositar 500 reais: " << contaEspecial.getSaldo() << endl;

    contaEspecial.sacar(700);
    cout << "Valor ao sacar 700 reais: " << contaEspecial.getSaldo() << endl;

    contaEspecial.definirLimite();
    cout << "Valor limite: " << contaEspecial.getLimite() << endl;

    return 0;
}
