#include <iostream>
#include "postagem.hpp"
#include "livro.hpp"

Postagem::Postagem(std::string apelido_, std::string descricao_, float preco_){
    apelido = apelido_;
    descricao = descricao_;
    preco = preco_;
};

void Postagem::set_livro(Livro l){
    produto = Livro(l.get_nome(), l.get_autor(), l.get_editora(), l.get_condicao(), 
    l.get_tipo(), l.get_ano());
};