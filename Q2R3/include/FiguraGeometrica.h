#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();

        void setNome(std::string nome);
        std::string getNome();

        virtual float calcularArea() = 0;

    protected:
        std::string nome;

    private:
};

#endif // FIGURAGEOMETRICA_H
