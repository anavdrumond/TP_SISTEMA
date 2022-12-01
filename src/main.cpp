#include <iostream>
#include "rede.hpp"
#include "transacao.hpp"

using namespace std;

void main(){
    while(true){
        while(true){
            cout << "Bem-vindo(a) à Biblioteca virtual"<< endl;
            cout << "Você possui cadastro ?"<< endl;
            char cadastro;
            cin >> cadastro;
            if(cadastro == 's'){

            }
            else if(cadastro == 'n'){
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

                cout << "Digite a sua senha " << endl;
                cin >> senhac;

                cout << "Digite o nome da sua cidade " << endl;
                cin >> cidadec;

                cout << "Qual é a sua Unidade Federativa ?" << endl;
                cin >> ufc;

                cout << "Qual deve ser o seu nome de usuário ?" << endl;
                cin >> idUsuarioc;

                Usuario( nomec,  telefonec, senhac, string emailc, string cidadec, string ufc, string idUsuarioc, float carteirac);
           
            }
         }
    }

    //menu
    //
    //
    //
    //
    //
    while(true){
        while(true){
            cout << "Menu de opções : " << endl;
            cout << "Se deseja procurar um usuário, digite usuarios" << endl;
            cout << "Se deseja procurar uma postagem, digite postagens" << endl;
            cout << "Se você quer fazer uma postagem, digite novo" << endl;
            cout << "Se você quer retirar uma postagem, digite retirar" << endl;
            cout << "Se você deseja acessar o seu perfil, digite perfil" << endl;
            cout << "Se deseja fechar o programa, digite sair" << endl << endl;

            string opcao;

            cin >> opcao;

            if(opcao == "usuarios"){
                cout << "Bem-vindo(a) a nossa lista de usuários" << endl;
            }
                else if(opcao == "postagens"){

                }
                    else if(opcao == "novo"){

                    }
                        else if(opcao == "retirar"){

                        }
                            else if(opcao == "perfil"){

                            }
                                else if(opcao == "sair"){

                                }


        }
    }
}