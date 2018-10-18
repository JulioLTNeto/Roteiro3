#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa : public Imovel
{
    public:
        Casa();
        virtual ~Casa();

        float calculaTotal(int total);

    protected:

    private:
};

#endif // CASA_H
