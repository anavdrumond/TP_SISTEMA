#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <set>
#include"rede.hpp"
#include"usuario.hpp"
#include<string.h>

void Rede::cria_post(){
    //Livro(std::string obra_, std::string autor_, std::string editora_, std::string condicao_, int ano_);
    //Postagem(std::string apelido_, std::string descricao_, float preco_, std::string _cat,std::string name_p);
    Livro l = Livro("era uma vez uma banana","carlos prates","oi filmes","novo",2012);
    Postagem p = Postagem("anabanana","livro top demais",45.78,"ficcao","bananas livro");
    p.set_livro(l);
    postagens.push_back(p);

    Livro l1 = Livro("calculo3","gimeedro","ufmg","novo",2018);
    Postagem p1 = Postagem("gugu","esse livro me salvou",109.78,"universitario","calc3");
    p.set_livro(l1);
    postagens.push_back(p1);

    Livro l2 = Livro("perdao a todos","padre andre","satificadora","usado",2017);
    Postagem p2 = Postagem("pastor carlos","leia todos os dias",78.98,"autoajuda","livro espiritual");
    p.set_livro(l2);
    postagens.push_back(p2);
}

void Rede::cria_user(){
    //Usuario(std::string _nome, std::string _telefone, std::string _email, std::string _idUsuario, float _carteira, std::string _senha);
    //Endereco(std::string _cidade, std::string _uf);
    Endereco end = Endereco("belo horizonte","MG");
    Usuario u = Usuario("ana drumond","34567890","ana@gmail.com","anabanana", 1234.7,"123456");

    u.set_endereco(end);
    perfis.push_back(u);

    Endereco end1 = Endereco("sao jose dos campos","SP");
    Usuario u1 = Usuario("gustavo","34345678","gustavo@gmail.com","gugu", 4.7,"126345");

    u.set_endereco(end1);
    perfis.push_back(u1);

    Endereco end2 = Endereco("paulopoles","SC");
    Usuario u2 = Usuario("carlos andre","34666780","amem@gmail.com","pastor carlos", 100234.7,"amem12");

    u.set_endereco(end2);
    perfis.push_back(u2);


}
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

        
        std::cout << "Qual o seu email? " << std::endl;
        std::cin >> emailc;
        int tamanho = 25;
        int count = 0;
        for(int i=0; i<=tamanho; i++){
            if(emailc[i] = '@'){
                count++;
                break;
            }
        }
        if(count == 0){
            throw emailInvalido(emailc);
        }

        //{
            std::cout << "Escolha uma senha de 6 digitos " << std::endl;
            std::cin >> senhac;
            int tam = senhac.size();
            if(tam != 6){
                throw senhaInvalida(senhac);
            }    
        //}

        std::cout << "Qual e o seu nome ?" << std::endl;
        std::cin >> nomec;
        if(nomec[0]== ' ' || nomec[0] == '\n'){
            throw NomeInvalido(nomec);
        }

        std::cout << "Digite o seu telefone " << std::endl;
        std::cin >> telefonec;

        std::cout << "Digite o nome da sua cidade " << std::endl;
        std::cin >> cidadec;
        if(cidadec[0] == ' ' || cidadec[0] == '\n'){
            throw NomeInvalido(cidadec);
        }

        std::cout << "Qual a sua Unidade Federativa ?" <<std::endl;
        std::cin >> ufc;
        std::vector<std::string> estados {"AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC"};
        for(int i=0; i<27; i++){
            if(estados[i] == ufc){
                break;
            }
            if(i == 27){
                throw estadoInvalido(ufc);
            }
        }

        std::cout << "Qual deve ser o seu nome de usario ?" <<std::endl;
        std::cin >> idUsuarioc;
                

        //std::string _nome, std::string _telefone, std::string _email, std::string _idUsuario, float _carteira, std::string _senha
        Usuario user = Usuario(nomec,telefonec,emailc,idUsuarioc,carteirac,senhac);
        perfis.push_back(user);
        perfil = user;
    }
    else{
        std::string emai;
        std::string senh;

        std::cout << "Qual o seu email registrado? " << std::endl;
        std::cin >> emai;

        std::cout << "Digite sua senha: " << std::endl;
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
    char *word;
    char f = '.';
    Postagem pote;
    arqpost.open("postagens.txt");
    if(arqpost.is_open()){
        while(getline(arqpost,linha,f)){
            char* char_arr;
            char_arr = &linha[0];
            for(int i = 0;i < 2;i++){
                if(i == 0){
                    word = strtok(char_arr," ");
                    std::string s = word;
                    pote.set_apelido(s);
                }
                if(i == 0){
                    std::string s1 = word;
                    word = strtok(char_arr," ");
                    pote.set_descri(s1);
                }
                if(i == 0){
                    std::string s2 = word;
                    word = strtok(char_arr," ");
                    pote.set_nome_post(s2);
                    
                }
            }
            postagens.push_back(pote);

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
    std::string autor_l;
    std::cout<<"Queremos saber mais sobre o livro..."<<std::endl;

    std::cout<<"Qual o nome do livro ?"<<std::endl;
    std::string obra_l;
    std::cin>>obra_l;
    if(obra_l == ""){
        throw NomeInvalido(obra_l);
    }

    while(true){
        std::cout<<"Qual o autor ou autora ?"<<std::endl;
        std::cin>>autor_l;
        if(autor_l == "a"){
            throw NomeInvalido(autor_l);
        }else
            break;
    };

    std::cout<<"Qual a editora ?"<<std::endl;
    std::string editora_l;
    std::cin>>editora_l;
        if(editora_l == "a"){
            throw NomeInvalido(editora_l);
        }

    std::cout<<"O livro é novo ou usado ?"<<std::endl;
    std::string condicao_l;
    std::cin>>condicao_l;
        if(condicao_l != "novo" && condicao_l != "NOVO" && condicao_l != "Novo"
        && condicao_l != "usado" && condicao_l != "USADO" && condicao_l != "Usado"){
            throw condicaoInvalida(condicao_l);
        } 

    std::cout<<"Qual ano de lançamento ?"<<std::endl;  //VER ERRO CASO NAO SEJA UM INTEIRO
    int ano_l;
    std::cin>>ano_l;
        if(ano_l < 1000 || ano_l > 2023 ){
            throw anoInvalido(ano_l);
        }

    std::string apelido_us = us.get_idusuario();

    std::cout<<"De uma descriçao:"<<std::endl;
    std::string descricao_post;
    std::cin>>descricao_post;

    std::cout<<"Qual o preço do livro?"<<std::endl;
    float valor_livro;
    std::cin>>valor_livro;
        if(valor_livro<=0){
            throw valorInvalido(valor_livro);
        }
   
    std::cout<<"Qual a categoria do livro?"<<std::endl;
    std::string _categ;
    std::cin>>_categ;

    std::cout<<"Qual o nome da postagem ?"<<std::endl;
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

//----Lançamento de Erros------
NomeInvalido::NomeInvalido(std::string titulo){
    _titulo = titulo;
    mensagem_nome = "Digite um nome valido!";

}
const char* NomeInvalido::what() const noexcept{
    const char* msg;
    msg = &mensagem_nome[0];
    return msg;
}

condicaoInvalida::condicaoInvalida(std::string cond){
    _cond = cond;
    mensagem_cond = "Digite 'novo' ou 'usado'. ";
}

const char* condicaoInvalida::what() const noexcept{
    const char* msg2;
    msg2 = &mensagem_cond[0];
    return msg2;
}

anoInvalido::anoInvalido(int ano){
    _ano = ano;
    mensagem_ano = "Digite um ano valido!";
}

const char* anoInvalido::what() const noexcept{
    const char* msg3;
    msg3 = &mensagem_ano[0];
    return msg3;
}

valorInvalido::valorInvalido(float valor){
    _valor = valor;
    mensagem_valor = "Digite um valor valido!";
}

const char* valorInvalido::what() const noexcept{
    const char* msg4;
    msg4 = &mensagem_valor[0];
    return msg4;
}

emailInvalido::emailInvalido(std::string mail){
    _mail = mail;
    mensagem_email = "Digite um email valido!";
}

const char* emailInvalido::what() const noexcept{
    const char* msg5;
    msg5 = &mensagem_email[0];
    return msg5;
}

senhaInvalida::senhaInvalida(std::string sen){
    _sen = sen;
    mensagem_senha = "Digite uma senha de 6 digitos!";

}
const char* senhaInvalida::what() const noexcept{
    const char* msg6;
    msg6 = &mensagem_senha[0];
    return msg6;
}
estadoInvalido::estadoInvalido(std::string est){
    _est = est;
    mensagem_estado = "Digite um estado valido!";

}
const char* estadoInvalido::what() const noexcept{
    const char* msg7;
    msg7 = &mensagem_estado[0];
    return msg7;
}