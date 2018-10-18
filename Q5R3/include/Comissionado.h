#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
        Comissionado();
        Comissionado(double vendasSemanais, double percentualComissao);
        virtual ~Comissionado();

        double calculaSalario();

        void setVendasSemanais(double vendasSemanais);
        void setPercentualComissao(double percentualComissao);

        double getVendasSemanais();
        double getPercentualComissao();

    protected:

    private:
        double vendasSemanais;
        double percentualComissao;
};

#endif // COMISSIONADO_H
