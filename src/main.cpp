#include <iostream>
#include "rede.hpp"
#include "transacao.hpp"

using namespace std;

void main(){
    while(true){
        //while(true){
        cout << "Bem-vindo(a) à Biblioteca virtual"<< endl;
        cout << "Cadastre-se"<< endl;
            //char cadastro;
            //cin >> cadastro;
            //if(cadastro == 's'){
                //pedir email
                //pedir senha
                //
            //}
            //if(cadastro == 'n'){
                
        string nomec;
        string telefonec;
        string senhac;
        string emailc;
        string cidadec;
        string ufc;
        string idUsuarioc;
        float carteirac = 0;

        cout << "Qual é o seu nome ?" << endl;
        cin >> nomec;

        cout << "Digite o seu telefone " << endl;
        cin >> telefonec;

        cout << "Digite o nome da sua cidade " << endl;
        cin >> cidadec;

        cout << "Qual é a sua Unidade Federativa ?" << endl;
        cin >> ufc;

        cout << "Qual deve ser o seu nome de usuário ?" << endl;
        cin >> idUsuarioc;
                
        cout << "Digite a sua senha " << endl;
        cin >> senhac;

        Usuario perfil = Usuario(nomec, telefonec, emailc, idUsuarioc, carteirac, senhac);
        Endereco end = Endereco(cidadec, ufc);
               
        
        Rede net = Rede(perfil);
        cout << "Menu de opções : " << endl;
        cout << "Se deseja procurar um usuário, digite u" << endl;
        cout << "Se deseja procurar uma postagem, digite p" << endl;
        cout << "Se você quer fazer uma postagem, digite n" << endl;
        cout << "Se você quer retirar uma postagem, digite r" << endl;
        cout << "Se você deseja acessar o seu perfil, digite e'" << endl;
        cout << "Se deseja fechar o programa, digite x" << endl << endl;

        char opcao;

        cin >> opcao;

        if(opcao == 'u'){
            cout << "Buscar id do usuário: " << endl;
            std::string name;
            cin >> name;
            net.pesquisa_usuario(name);
            //COMPLETAR
        }

        else if(opcao =='p'){
            cout<<"Digite o nome da postagem: "<<endl;
            std::string name_postagem;
            cin>> name_postagem;
            net.pesquisa_postagem(name_postagem);
            //CPOMPLETAR
        }

        else if(opcao == 'n'){
            net.fazer_postagem(perfil);
            //COMPLETAR
        }

        else if(opcao == 'r'){
            cout<<"Digite o nome da postagem que deseja deletar: "<<endl;
            std::string name_delet;
            cin>> name_delet;
            net.deleta_postagem(perfil, name_delet);
        }

        else if(opcao == 'e'){
            perfil.mostra_usuario();
        }

        else if(opcao == 'x'){
            break;
        }
    }

}