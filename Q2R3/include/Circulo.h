#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(float raio);
        virtual ~Circulo();

        virtual float calcularArea();

    protected:

    private:
        float raio;
};

#endif // CIRCULO_H
