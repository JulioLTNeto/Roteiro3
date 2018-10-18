#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(float altura, float largura);
        virtual ~Triangulo();

        virtual float calcularArea();

    protected:

    private:
        float altura;
        float largura;
};

#endif // TRIANGULO_H
