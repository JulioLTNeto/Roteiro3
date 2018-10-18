#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();

        float calculaTotal(int total);

    protected:

    private:
};

#endif // APARTAMENTO_H
