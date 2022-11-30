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
    std::cout<<"queremos saber mais sobre o livro"<<std::endl;
    std::cout<<"qual o nome do livro ?"<<std::endl;
    std::string obra_l;
    std::cin>>obra_l;

    std::cout<<"qual o autor ou autora ?"<<std::endl;
    std::string autor_l;
    std::cin>>autor_l

    std::cout<<"qual a editora ?"<<std::endl;
    std::string editora_l;
    std::cin>>editora_l

    std::cout<<"o livro é novo ou usado ?"<<std::endl;
    std::string condicao_l;
    std::cin>>condicao_l;

    std::cout<<"qual ano de lançamento ?"<<std::endl;
    int ano_l;
    std::cin>>ano_l

    std::string apelido_us = us.get_idusuario();
    std::cout<<"de uma descrição:"<<std::endl;
    std::string descricao_post;
    std::cin>>descricao_post;

    std::cout<<"qual o preço do livro?"<<std::endl;
    float valor_livro;
    std::cin>>valor_livro;

    std::cout<<"qual a categoria do livro?"<<std::endl;
    std::string _categ;
    std::cin>>_categ;
    Livro liv = Livro(obra_l,autor_l,editora_l,condicao_l,ano_l);
    Postagem posta = Postagem(apelido_us, descricao_post, valor_livro,_categ);
}

Postagem Rede::pesquisa_postagem(){

}
Usuario Rede::pesquisa_usuario(){

}

void Rede::compra_moeda(Usuario us){
    char esc = 'c';
    us.modifica_carteira(esc);
}
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
*
