#include<iostream>
#include"rede.hpp"
#include"usuario.hpp"

Rede::Rede(Usuario perfil_){
    perfil = perfil_;
};
void Rede::deleta_postagem(Usuario us, std::string postagem_apagar){
    for(int i=0; i<100; i++){
        if(us.conj_post[i] == postagem_apagar){
            us.conj_post.erase (us.conj_post.begin()+i - 1);
        }
    }
}
void Rede::fazer_postagem(Usuario us){
    std::cout<<"queremos saber mais sobre o livro"<<std::endl;
    std::cout<<"qual o nome do livro ?"<<std::endl;
    std::string obra_l;
    std::cin>>obra_l;

    std::cout<<"qual o autor ou autora ?"<<std::endl;
    std::string autor_l;
    std::cin>>autor_l;

    std::cout<<"qual a editora ?"<<std::endl;
    std::string editora_l;
    std::cin>>editora_l;

    std::cout<<"o livro é novo ou usado ?"<<std::endl;
    std::string condicao_l;
    std::cin>>condicao_l;

    std::cout<<"qual ano de lançamento ?"<<std::endl;
    int ano_l;
    std::cin>>ano_l;

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

void Rede::pesquisa_postagem(std::string livro_pesquisar){
    for(int i=0; i<100; i++){
        if(postagens[i].get_nome_post() == livro_pesquisar){
            postagens[i].mostra_postagem();
        }
    }    
}

void Rede::pesquisa_usuario(std::string apelido_pesquisar){
    for(int i=0; i<100; i++){
        if(perfis[i].get_idusuario() == apelido_pesquisar){
            perfis[i].mostra_usuario();
        }
    }    
}

void Rede::compra_moeda(Usuario us){
    char esc = 'c';
    float dinheiro;
    std::cout<<"Quanto você quer resgatar?"<<std::endl;
    std::cin>>dinheiro;
    us.modifica_carteira(dinheiro, esc);
}