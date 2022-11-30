#include "usuario.hpp"
#include "endereco.hpp"

Usuario::Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, int _idUsuario, float _carteira){

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

