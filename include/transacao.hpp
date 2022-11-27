#include <iostream>
#include "postagem.hpp"
#include "usuario.hpp"

class Transacao:public Postagem{
    private:
    std::string status;

    public:
    virtual void modifica_status() = 0;
    virtual std::string operacao(Usuario u) = 0;
    void tipo_acordo(char opcao);

    Transacao(std::string status);
};