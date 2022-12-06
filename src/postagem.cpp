#include <iostream>
#include "postagem.hpp"

Postagem::Postagem(std::string apelido_ ,std::string descricao_ ,float preco_ ,std::string _cat ,std::string name_p){
    apelido = apelido_;
    descricao = descricao_;
    preco = preco_;
    categoria = _cat;
    nome_post = name_p;
}

void Postagem::set_livro(Livro l){
    produto = Livro(l.get_obra(), l.get_autor(), l.get_editora(), l.get_condicao(), l.get_ano());
}

std::string Postagem::get_categoria(){
    return categoria;
}

std::string Postagem::get_nome_post(){
    return nome_post;
}

std::string Postagem::get_apelido(){
    return apelido;
}

std::string Postagem::get_descricao(){
    return descricao;
}

Livro Postagem::get_livro(){
    return produto;
}
float Postagem::get_preco(){
    return preco;
}


void Postagem::set_categoria(std::string cato){
    categoria = cato;
}
void Postagem::set_nome_post(std::string posname){
    nome_post = posname;
}
void Postagem::set_apelido(std::string apel){
    apelido = apel;
}
void Postagem::set_descri(std::string desc){
    descricao = desc;
}
void Postagem::set_preco(float val){
    preco = val;
}



void Postagem::mostra_postagem(){
    std::cout<<apelido<<std::endl;
    std::cout<<descricao<<std::endl;
    std::cout<<preco<<std::endl;
    std::cout<<categoria<<std::endl;
}