#include "usuario.hpp"
#include "endereco.hpp"

Usuario::Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, std::string _idUsuario, float _carteira){

        nome = _nome;
        telefone = _telefone;
        senha = _senha;
        email = _email;
        idUsuario = _idUsuario;
        carteira = _carteira;
    };
    
void Usuario::modifica_carteira(float valor, char op){

    //quando tira o valor da carteira e quando adiciona?
    if(op == 'v'){
        carteira -= valor;
    }
    if(op == 'c'){
        carteira += valor;
    }
};    

void Usuario::recebe_postagem(std::string p){
    conj_post.push_back(p);
}

std::string Usuario::get_idusuario(){
    return idUsuario;
}

void Usuario::mostra_usuario(){
    std::cout<<nome<<std::endl;
    std::cout<<telefone<<std::endl;
    std::cout<<email<<std::endl;

    for(int i=0; i<100; i++){
        std::cout<<conj_post[i]<<std::endl;
    }
}