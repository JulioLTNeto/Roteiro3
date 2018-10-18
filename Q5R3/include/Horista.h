#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
        Horista();
        Horista(double salarioPorHora, double horasTrabalhadas);
        virtual ~Horista();

        double calculaSalario();

        void setSalarioPorHora(double salarioPorHora);
        void setHorasTrabalhadas(double horasTrabalhadas);

        double getSalarioPorHora();
        double getHorasTrabalhadas();

    protected:
        double salarioPorHora;
        double horasTrabalhadas;

    private:
};

#endif // HORISTA_H
