#include <iostream>
#include "postagem.hpp"

Postagem::Postagem(std::string apelido_, std::string descricao_, float preco_,std::string _cat){
    apelido = apelido_;
    descricao = descricao_;
    preco = preco_;
    categoria = _cat;
}

void Postagem::set_livro(Livro l){
    produto = Livro(l.get_obra(), l.get_autor(), l.get_editora(), l.get_condicao(), l.get_tipo(), l.get_ano());
}

std::string Postagem::get_categoria(){
    return categoria;
}
