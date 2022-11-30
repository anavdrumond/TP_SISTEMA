#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include "postagem.hpp"

Postagem::Postagem(std::string apelido_, std::string descricao_, float preco_){
    apelido = apelido_;
    descricao = descricao_;
    preco = preco_;
}

void Postagem::set_livro(Livro l){
    produto = Livro(l.get_obra(), l.get_autor(), l.get_editora(), l.get_condicao(), l.get_tipo(), l.get_ano());
}

void Postagem::gera_codigo(){
    
    unsigned seed = time(0);
    srand(seed);
    codigo = 100 + std::rand()%999999;
}