#include <iostream>
#include "transacao.hpp"
#include "venda.hpp"
#include "postagem.hpp"

Venda::Venda(){

}

void Venda::modifica_status(){

    status == "vendido";
}
float Venda::get_preco(){
    return preco;

}

std::string Venda::operacao(Usuario u){
    char op_ = 'v';

    u.modifica_carteira(preco,op_);
    //acessar as moedas do usuario e tirar delas o preço
    //isso me fez lembrar uma coisa....

}