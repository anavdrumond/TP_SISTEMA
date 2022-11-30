#include <iostream>
#include "postagem.hpp"
#include "usuario.hpp"

class Transacao:public Postagem{

    public:
    virtual void modifica_status() = 0;
    virtual std::string operacao(Usuario u) = 0;
    void tipo_acordo(char opcao,Usuario perf);
    std::string status = "Disponivel para: troca / venda";
    virtual float get_preco() = 0;
    Transacao();
};
