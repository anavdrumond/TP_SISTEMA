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
    std::cout<<"O preço do livro é R$" + std::to_string(preco);
    u.modifica_carteira(preco,op_);
    std::cout<< "Compra efetuada com sucesso!"<<std::endl;
}

//COLOCAR ENDERECO