#include<iostream>
#include "livro.hpp"

class Postagem{
    private:
    Livro produto;
    std::string descricao;
    std::string apelido;
    unsigned int codigo;
    
    public:
    float preco;
    Postagem(std::string apelido_, std::string descricao_, float preco_);

    void set_livro(Livro l);

    void gera_codigo();

};