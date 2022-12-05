#include <iostream>
#include "transacao.hpp"
#include "venda.hpp"
#include "postagem.hpp"

Venda::Venda(Postagem p):Transacao()
{
    
}

void Venda::modifica_status(){

    status == "vendido";
}

std::string Venda::operacao(Usuario u){
    char op_ = 'v';
    std::cout<<"O preco do livro e R$" + std::to_string(postag.get_preco());
    u.modifica_carteira(postag.get_preco(),op_);
    std::cout<< "Compra efetuada com sucesso!"<<std::endl;
}

//COLOCAR ENDERECO