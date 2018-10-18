#ifndef ORCAMENTOEXCEDIDO_H
#define ORCAMENTOEXCEDIDO_H

#include <exception>

class OrcamentoExcedido : public std::exception
{
    public:
        OrcamentoExcedido();
        virtual ~OrcamentoExcedido();

    protected:

    private:
};

#endif // ORCAMENTOEXCEDIDO_H
