#include <iostream>
#include "rede.hpp"
#include "transacao.hpp"
#include "venda.hpp"
#include "troca.hpp"

using namespace std;

int main(){
    cout << "Bem-vindo(a) à Biblioteca virtual"<< endl;
    cout << "Cadastre-se"<< endl;
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
    while(true){

        cout << "Menu de opções : " << endl;
        cout << "Se deseja procurar um usuário, digite u" << endl;
        cout << "Se deseja procurar uma postagem, digite p" << endl;
        cout << "Se você quer fazer uma postagem, digite n" << endl;
        cout << "Se você quer retirar uma postagem, digite r" << endl;
        cout << "Se você deseja acessar o seu perfil, digite e'" << endl;
        cout << "Se deseja fechar o programa, digite x" << endl;

        char opcao;

        cin >> opcao;

        if(opcao == 'u'){
            while(true){
                char opcao2;
                cout << "Buscar id do usuário: " << endl;
                string name;
                cin >> name;
                net.pesquisa_usuario(name);
                cout<<"Se deseja voltar ao menu principal, aperte x"<<endl;
                cout<<"Se deseja procurar uma postagem, digite p" << endl;
                cin>>opcao2;
                if(opcao2 == 'x'){
                    break;
                }
                if(opcao2 == 'p'){
                    string post;
                    cout<<"Digite qual postagem você deseja abrir"<<endl;
                    cin>>post;
                    //COMPLETAR
                }

            }
        }

        else if(opcao =='p'){
            while(true){
                char opcao3;
                cout<<"Digite o nome da postagem: "<<endl;
                std::string name_postagem;
                cin>> name_postagem;
                net.pesquisa_postagem(name_postagem);
                cout<<"Se deseja voltar ao menu principal, aperte x"<<endl;
                cout<<"Você deseja comprar(v) ou trocar(t)?"<<endl;
                cin>>opcao3;

                if(opcao3 == 'x'){
                    break;
                }
                else if(opcao3 == 'v'){
                    char opcao4;
                    int muie = 4;
                    Venda v = Venda(muie);
                    v.operacao(perfil);
                    v.modifica_status();
                    cout<<"Aperte x para fechar o programa"<<endl;
                    cin>>opcao4;
                    if(opcao4 == 'x')
                        break;
                }
                else if(opcao3 == 't' ){
                    char opcao5;
                    int omi = 1;
                    Troca t = Troca(omi);
                    t.operacao(perfil);
                    t.modifica_status();
                    cout<<"Aperte x para fechar o programa"<<endl;
                    cin>>opcao5;
                    if(opcao5 == 'x')
                        break;
                }
                else
                    break;
            }    
        }

        else if(opcao == 'n'){
            while(true){
                net.fazer_postagem(perfil);
                cout<<" "<<endl;
                cout<<" "<<endl;
                char op;
                cout<<"aperte x para continuar"<<endl;
                cin>>op;
                if(op == 'x'){
                    break;
                }
                else{

                }
            }
        }

        else if(opcao == 'r'){
            cout<<"Digite o nome da postagem que deseja deletar: "<<endl;
            std::string name_delet;
            cin>> name_delet;
            net.deleta_postagem(perfil, name_delet);
            cout<<" "<<endl;
            cout<<" "<<endl;
        
        }

        else if(opcao == 'e'){
            perfil.mostra_usuario();
        }

        else if(opcao == 'x'){
            break;
        }
    }

}