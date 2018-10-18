#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();

        virtual double calculaSalario() = 0;

        void setNome(std::string nome);
        void setMatricula(int matricula);

        std::string getNome();
        int getMatricula();

    protected:
        std::string nome;
        int matricula;

    private:
};

#endif // FUNCIONARIO_H
