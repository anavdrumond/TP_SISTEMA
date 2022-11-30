#include <iostream>
#include "transacao.hpp"
#include "usuario.hpp"

class Troca:public Transacao {

    public:
    void modifica_status() override;
    std::string operacao(Usuario u) override;
    float get_preco();
    Troca();
};