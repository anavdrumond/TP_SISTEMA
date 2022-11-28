#include <iostream>
#include "transacao.hpp"
#include "usuario.hpp"

class Venda:public Transacao {

    public:
    void modifica_status() override;
    std::string operacao(Usuario u) override;
    Venda();
};