#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
        Assalariado();
        Assalariado(double salario);
        virtual ~Assalariado();

        double calculaSalario();

        void setSalario(double salario);

    protected:
        double salario;

    private:
};

#endif // ASSALARIADO_H
