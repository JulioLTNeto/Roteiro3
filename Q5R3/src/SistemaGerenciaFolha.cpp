#include "SistemaGerenciaFolha.h"
#include <iostream>

#include <stdexcept>
#include <exception>

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario* fn)
{
    funcionarios.push_back(fn);
}

double SistemaGerenciaFolha::calculaTotalFolha()
{
    double total = 0;
    for(Funcionario* fn : funcionarios){
        total = total+fn->calculaSalario();
    }
    if(total > 10000){
        throw new OrcamentoExcedido();
    }
    return total;
}

double SistemaGerenciaFolha::consultarSalarioFuncionario(int id)
{
    double total = 0;
    int contador=0;

    for(Funcionario* fn : funcionarios){
        if(id == contador){
            total = total + fn->calculaSalario();
        }
    contador++;
    }
    if(total == 0){
        throw new FuncionarioNaoExiste();
    }
    return total;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}
