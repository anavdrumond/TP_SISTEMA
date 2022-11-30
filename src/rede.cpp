#include<iostream>
#include"rede.hpp"
#include"usuario.hpp"

Rede::Rede(Usuario perfil_){
    perfil = perfil_;
};
void Rede::deleta_postagem(Usuario us){

}
void Rede::cancela_usuario(Usuario us){

}
void Rede::fazer_postagem(Usuario us){
    std::string apelido_us;
    std::string descricao_post;
    float valor_livro;

    std::cin>>descricao_post;
    std::cin>>valor_livro;

    Livro liv = Livro();
    Postagem posta = Postagem(apelido_us, descricao_post, valor_livro);
}
Postagem Rede::pesquisa_postagem(){}
Usuario Rede::pesquisa_usuario(){}
void Rede::Redecompra_moeda(){}
void Rede::adiciona_amigo(){}
    

/* 
Literatura infantil/juvenil
Ficçao/Literatura
Biografia
Gastronomia
Autoajuda
História
Viagem
Humor
Guias & Como fazer 
Religião e Espiritualidade
Humanidades e Ciências Sociais
Paternidade e família
Tecnologia e Ciência
Outros



*/