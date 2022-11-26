#include <iostream>
#include "transacao.hpp"

class Venda:public Transacao {

    public:
    void modifica_status() override;
    std::string operacao(int moeda) override;
};