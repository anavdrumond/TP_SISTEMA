#include<iostream>
#include"rede.hpp"
#include"usuario.hpp"


void Rede::fazer_cadastro(char esc){
    if(esc == 'n'){
        std::string nomec;
        std::string telefonec;
        std::string senhac;
        std::string emailc;
        std::string cidadec;
        std::string ufc;
        std::string idUsuarioc;
        float carteirac = 0;

        std::cout << "qual o seu email " << std::endl;
        std::cin >> emailc;

        std::cout << "escolha uma sua senha " << std::endl;
        std::cin >> senhac;

        std::cout << "Qual e o seu nome ?" << std::endl;
        std::cin >> nomec;

        std::cout << "Digite o seu telefone " << std::endl;
        std::cin >> telefonec;

        std::cout << "Digite o nome da sua cidade " << std::endl;
        std::cin >> cidadec;

        std::cout << "Qual é a sua Unidade Federativa ?" <<std::endl;
        std::cin >> ufc;

        std::cout << "Qual deve ser o seu nome de usuário ?" <<std::endl;
        std::cin >> idUsuarioc;
                

        //std::string _nome, std::string _telefone, std::string _email, std::string _idUsuario, float _carteira, std::string _senha
        Usuario user = Usuario(nomec,telefonec,emailc,idUsuarioc,carteirac,senhac);
        perfis.push_back(user);
        perfil = user;
    }
    else{
        std::string emai;
        std::string senh;

        std::cout << "qual o seu email " << std::endl;
        std::cin >> emai;

        std::cout << "escolha uma sua senha " << std::endl;
        std::cin >> senh;
        for(int i = 0;i < perfis.size();i++){
            if(perfis[i].get_senha() == senh && perfis[i].get_email() == emai){
                perfil = perfis[i];
            }
        }

    }

}
Rede::Rede(int cod_){
    cod = cod_;
}

Usuario Rede::get_user(){
    return perfil;
}
void Rede::preenche_postagem(){
    std::ifstream arqpost;
    std::string linha;
    char f = '.';
    arqpost.open("postagens.txt");
    if(arqpost.is_open()){
        while(getline(arqpost,linha,f)){

        }
    }
    else{
        std::cout<<"nao foi possivel abrir o arquivo"<<std::endl;
    }

}
void Rede::preenche_user(){
    std::ifstream arquser;
    std::string linha1;
    char fi = '.';
    arquser.open("usuarios.txt");
    if(arquser.is_open()){
        while(getline(arquser,linha1,fi)){
            
        }
    }
    else{
        std::cout<<"nao foi possivel abrir o arquivo"<<std::endl;
    }
}

void Rede::deleta_postagem(Usuario us, std::string postagem_apagar){
    for(int i=0; i<100; i++){
        if(us.conj_post[i] == postagem_apagar){
            us.conj_post.erase (us.conj_post.begin()+i - 1);
        }
    }
    std::cout<<"Postagem deletada com sucesso!"<<std::endl;
}

void Rede::fazer_postagem(Usuario us){
    std::cout<<"Queremos saber mais sobre o livro..."<<std::endl;

    std::cout<<"Qual o nome do livro ?"<<std::endl;
    std::string obra_l;
    std::cin>>obra_l;
    if(obra_l == " "){
        throw NomeInvalido(obra_l);
    }

    std::cout<<"Qual o autor ou autora ?"<<std::endl;
    std::string autor_l;
    std::cin>>autor_l;
        if(autor_l == " "){
        throw NomeInvalido(autor_l);
    }

    std::cout<<"Qual a editora ?"<<std::endl;
    std::string editora_l;
    std::cin>>editora_l;
        if(editora_l == " "){
        throw NomeInvalido(editora_l);
    }

    std::cout<<"O livro é novo ou usado ?"<<std::endl;
    std::string condicao_l;
    std::cin>>condicao_l;
        if(condicao_l != "novo" || condicao_l != "usado"){
            //throw 
        } 

    std::cout<<"Qual ano de lançamento ?"<<std::endl;
    int ano_l;
    std::cin>>ano_l;

    std::string apelido_us = us.get_idusuario();

    std::cout<<"de uma descrição:"<<std::endl;
    std::string descricao_post;
    std::cin>>descricao_post;

    std::cout<<"Qual o preço do livro?"<<std::endl;
    float valor_livro;
    std::cin>>valor_livro;

    std::cout<<"Qual a categoria do livro?"<<std::endl;
    std::string _categ;
    std::cin>>_categ;

    std::cout<<"qual o nome da postagem ?"<<std::endl;
    std::string name_post;
    std::cin>>name_post;

    Livro liv = Livro(obra_l,autor_l,editora_l,condicao_l,ano_l);
    Postagem posta = Postagem(apelido_us, descricao_post, valor_livro,_categ,name_post);

    posta.set_livro(liv);
    postagens.push_back(posta);

    std::cout<<"Postagem realizada com sucesso"<<std::endl;
}

Postagem Rede::pesquisa_postagem(std::string livro_pesquisar){
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

NomeInvalido::NomeInvalido(std::string titulo){
    _titulo = titulo;
    mensagem = "Digite um nome válido!";
}
const char* NomeInvalido::what() const noexcept{
    const char* men;
    men = &mensagem[0];
    return men;
}