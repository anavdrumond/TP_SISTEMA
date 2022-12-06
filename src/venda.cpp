#include <iostream>
#include "transacao.hpp"
#include "venda.hpp"
#include "postagem.hpp"

Venda::Venda(Postagem p):Transacao(p)
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
void Venda::set_post(Postagem opp){
    postag = Postagem(opp.get_apelido(),opp.get_descricao(),opp.get_preco(),opp.get_categoria(),opp.get_nome_post());
    postag.set_livro(opp.get_livro());
}

//COLOCAR ENDERECO