#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        void setNome(std::string nome);
        void setPreco(float preco);

        std::string getNome();
        float getPreco();

        virtual float calculaTotal(int total) = 0;

    protected:
        std::string nome;
        float preco;

    private:
};

#endif // IMOVEL_H
