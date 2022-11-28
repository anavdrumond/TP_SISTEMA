#include "livro.hpp"
#include <iostream>

Livro::Livro(std::string nome_, std::string autor_, std::string editora_, std::string condicao_, std::string tipo_, int ano_){
    nome = nome_;
    autor = autor_;
    editora = editora_;
    condicao = condicao_;
    tipo = tipo_;
    ano = ano_;
};
    std::string Livro::get_nome(){
        return nome;
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
    std::string Livro::get_tipo(){
        return tipo;
    }
    int Livro::get_ano(){
        return ano;
    }