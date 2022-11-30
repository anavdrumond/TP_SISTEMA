#include<iostream>
#include "livro.hpp"

class Postagem{
    private:
    Livro produto;
    std::string descricao;
    std::string apelido;
    std::string nome_post;
    std::string categoria;
    
    public:
    float preco;
    Postagem(std::string apelido_, std::string descricao_, float preco_,std::string _cat);

    void set_livro(Livro l);

    std::string get_categoria();

};
