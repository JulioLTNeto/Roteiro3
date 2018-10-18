#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Funcionario.h"
#include <list>

#include "FuncionarioNaoExiste.h"
#include "OrcamentoExcedido.h"

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        virtual ~SistemaGerenciaFolha();

        void setFuncionarios(Funcionario* fn);
        double calculaTotalFolha();
        double consultarSalarioFuncionario(int id);

    protected:

    private:
        std::list<Funcionario*> funcionarios;

};

#endif // SISTEMAGERENCIAFOLHA_H
