#include <iostream>
#include "transacao.hpp"
#include "troca.hpp"

Troca::Troca(){
    
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
            //pop.back obra;
        }
    }
    std::cout<<"Troca solicitada com sucesso! Entre em contato com este usuário para realizar a troca."<<std::endl;
}

float Troca::get_preco(){
    return preco;
}