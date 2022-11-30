#include "livro.hpp"
#include <iostream>

Livro::Livro(std::string obra_, std::string autor_, std::string editora_, std::string condicao_, int ano_){
    obra = obra_;
    autor = autor_;
    editora = editora_;
    condicao = condicao_;
    ano = ano_;
}

std::string Livro::get_obra(){
    return obra;
}

std::string Livro::get_autor(){
    return autor;
}

std::string Livro::get_editora(){
    return editora;
}

std::string Livro::get_condicao(){
    return condicao;
}

int Livro::get_ano(){
    return ano;
}
