#include <iostream>

#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

#include <exception>
#include <stdexcept>
#include "FuncionarioNaoExiste.h"
#include "OrcamentoExcedido.h"

using namespace std;

int main()
{
    cout << "Bem vindo ao sistema!" << endl;

    SistemaGerenciaFolha sg = SistemaGerenciaFolha();

    Funcionario* fn = new Assalariado(2500);
    fn->setNome("Ass");
    fn->setMatricula(2017950925);

    sg.setFuncionarios(fn);

    fn = new Horista(100, 40);
    fn->setNome("Hor");
    fn->setMatricula(4457577);

    sg.setFuncionarios(fn);

    fn = new Comissionado(1000, 0.4);
    fn->setNome("Com");
    fn->setMatricula(699949334);

    sg.setFuncionarios(fn);

    try{
        cout << "\nTotal Folha:           " << sg.calculaTotalFolha() << "R$" << endl;
    }catch(OrcamentoExcedido* ex){
        cout << "Total da folha excedido" << endl;
    }
    cout << "--------------------------------------------------"<< endl;
    try{
        cout << "Salario Assalariado:   " << sg.consultarSalarioFuncionario(0) << "R$"  << endl;
    }catch(FuncionarioNaoExiste* ex){
        cout << "Funcionario nao encontrado" << endl;
    }
    try{
        cout << "Salario Horista:       " << sg.consultarSalarioFuncionario(1) << "R$"  << endl;
    }catch(FuncionarioNaoExiste* ex){
        cout << "Funcionario nao existe" << endl;
    }
    try{
        cout << "Salario Comissionado:  " << sg.consultarSalarioFuncionario(2) << "R$"  << endl;
    }catch(FuncionarioNaoExiste* ex){
        cout << "Funcionario nao existe" << endl;
    }

    fn = new Assalariado(25500);
    fn->setNome("Ass");
    fn->setMatricula(2017950925);

    sg.setFuncionarios(fn);

    cout << "\n--------------Agora com as excessoes----------------" << endl;

    try{
        cout << "\nTotal Folha:           " << sg.calculaTotalFolha() << "R$" << endl;
    }catch(OrcamentoExcedido* ex){
        cout << "Total da folha excedido" << endl;
    }
    cout << "--------------------------------------------------"<< endl;
    try{
        cout << "Salario Assalariado:   " << sg.consultarSalarioFuncionario(3) << "R$"  << endl;
    }catch(FuncionarioNaoExiste* ex){
        cout << "Funcionario nao encontrado" << endl;
    }
    try{
        cout << "Salario Horista:       " << sg.consultarSalarioFuncionario(4) << "R$"  << endl;
    }catch(FuncionarioNaoExiste* ex){
        cout << "Funcionario nao existe" << endl;
    }
    try{
        cout << "Salario Comissionado:  " << sg.consultarSalarioFuncionario(5) << "R$"  << endl;
    }catch(FuncionarioNaoExiste* ex){
        cout << "Funcionario nao existe" << endl;
    }

    return 0;
}
