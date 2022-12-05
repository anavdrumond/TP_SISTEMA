#include <iostream>
#include "transacao.hpp"
#include "postagem.hpp"


void Transacao::set_post(Postagem p){
    postag = Postagem(p.get_apelido(),p.get_descricao(),p.get_preco(),p.get_categoria(),p.get_nome_post());
    postag.set_livro(p.get_livro());
}
std::string Transacao::get_status(){
    return status;
}

