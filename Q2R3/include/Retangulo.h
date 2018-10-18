#ifndef RETANGULO_H
#define RETANGULO_H

#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        Retangulo(float altura, float largura);
        virtual ~Retangulo();

        virtual float calcularArea();

    protected:

    private:
        float altura;
        float largura;
};

#endif // RETANGULO_H
