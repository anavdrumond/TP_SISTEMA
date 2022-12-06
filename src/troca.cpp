#include <iostream>
#include "transacao.hpp"
#include "troca.hpp"
#include "postagem.hpp"

Troca::Troca(Postagem p):Transacao(p)
{
    
}

void Troca::modifica_status(){

    status == "trocado";
}

std::string Troca::operacao(Usuario u){
    std::string o;
    std::cout<<"Qual livro você deseja disponibilizar para troca?"<<std::endl;
    std::cin>> o;
    for(int i=0; i<100; i++){ //DEFINIR LIMITE DE 100 POSTS
        if(u.conj_post[i] == o){
            std::cout<<"oi"<<std::endl;
        }
    }
    std::cout<<"Troca solicitada com sucesso! Entre em contato com este usuário para realizar a troca."<<std::endl;
}

void Troca::set_post(Postagem pop){
    postag = Postagem(pop.get_apelido(),pop.get_descricao(),pop.get_preco(),pop.get_categoria(),pop.get_nome_post());
    postag.set_livro(pop.get_livro());
}