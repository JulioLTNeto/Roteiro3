#include <iostream>

#include "Conta.h"
#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    cout << "Bem vindo ao sistema!" << endl;
    cout << "\n-------Trabalhando com a classe Conta-------\n" << endl;
    Conta conta = Conta();
    conta.setNomeCliente("Julio");
    conta.setNumero(876767998);
    conta.setSaldo(500);

    cout << "Cliente: " << conta.getNomeCliente() << endl;
    cout << "Saldo: " << conta.getSaldo() << endl;
    conta.sacar(300);
    cout << "Retirado 300 reais, saldo: " << conta.getSaldo() << endl;
    conta.sacar(300);
    cout << "Retirado mais 300 reais, saldo: " << conta.getSaldo() << endl;
    conta.depositar(700);
    cout << "Retirado 700 reais, saldo: " << conta.getSaldo() << endl;

    cout << "\n-------Trabalhando com a classe Conta Corrente-------\n" << endl;

    ContaCorrente cc = ContaCorrente();
    cc.setNomeCliente("Julio");
    cc.setNumero(876767998);
    cc.setSaldo(500);
    cc.setSalario(700);

    cout << "Cliente: " << cc.getNomeCliente() << endl;
    cout << "Saldo: " << cc.getSaldo() << endl;
    cc.sacar(300);
    cout << "Retirado 300 reais, saldo: " << cc.getSaldo() << endl;
    cc.sacar(300);
    cout << "Retirado mais 300 reais, saldo: " << cc.getSaldo() << endl;
    cc.depositar(700);
    cout << "Retirado 700 reais, saldo: " << cc.getSaldo() << endl;
    cc.definirLimite();
    cout << "Limite: " << cc.getLimite() << " e saldo: " << cc.getSalario() << endl;

    cout << "\n-------Trabalhando com a classe Conta Especial-------\n" << endl;

    ContaEspecial ce = ContaEspecial();
    ce.setNomeCliente("Julio");
    ce.setNumero(876767998);
    ce.setSaldo(500);
    ce.setSalario(700);

    cout << "Cliente: " << ce.getNomeCliente() << endl;
    cout << "Saldo: " << ce.getSaldo() << endl;
    ce.sacar(300);
    cout << "Retirado 300 reais, saldo: " << ce.getSaldo() << endl;
    ce.sacar(300);
    cout << "Retirado mais 300 reais, saldo: " << ce.getSaldo() << endl;
    ce.depositar(700);
    cout << "Retirado 700 reais, saldo: " << ce.getSaldo() << endl;
    ce.definirLimite();
    cout << "Limite: " << ce.getLimite() << " e saldo: " << ce.getSalario() << endl;

    Poupanca poupanca = Poupanca();
    poupanca.setNomeCliente("Julio");
    poupanca.setNumero(876767998);
    poupanca.setSaldo(500);
    poupanca.setTaxaRendimento(0.08);
    poupanca.setVariacao(5);

    cout << "\n-------Trabalhando com a classe Conta Poupança-------\n" << endl;

    cout << "Cliente: " << poupanca.getNomeCliente() << endl;
    cout << "Saldo: " << poupanca.getSaldo() << endl;
    poupanca.sacar(300);
    cout << "Retirado 300 reais, saldo: " << poupanca.getSaldo() << endl;
    poupanca.sacar(300);
    cout << "Retirado mais 300 reais, saldo: " << poupanca.getSaldo() << endl;
    poupanca.depositar(700);
    cout << "Retirado 700 reais, saldo: " << poupanca.getSaldo() << endl;
    cout << "Rendimento de " << poupanca.render() << " reais, taxa de rendimento: " << poupanca.getTaxaRendimento()*100 << "%" << endl;


    return 0;
}
