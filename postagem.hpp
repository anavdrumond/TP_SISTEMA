#include<iostream>
#include"livro.cpp"
#include"livro.hpp"

class Postagem{
    private:
    Livro produto;
    std::string descricao;
    float preco;
    
    public:
    Postagem(Livro produto_, std::string descricao_, float preco_);
};