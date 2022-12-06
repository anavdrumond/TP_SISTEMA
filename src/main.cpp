#include <iostream>
#include <fstream>
#include <locale>
#include "rede.hpp"
#include "transacao.hpp"
#include "venda.hpp"
#include "troca.hpp"



using namespace std;

int main(){
    cout << "Bem-vindo(a) à Biblioteca virtual"<< endl;
    cout << "voce ja possui cadastro:"<< endl;
    char esco;
    cin>>esco;
    int codigo = 1;
    Rede net = Rede(codigo);
    net.fazer_cadastro(esco);
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
                Postagem pot = net.pesquisa_postagem(name_postagem);
                cout<<"Se deseja voltar ao menu principal, aperte x"<<endl;
                cout<<"Você deseja comprar(v) ou trocar(t)?"<<endl;
                cin>>opcao3;

                if(opcao3 == 'x'){
                    break;
                }
                else if(opcao3 == 'v'){
                    char opcao4;
                    Venda v = Venda(pot);
                    v.operacao(net.get_user());
                    v.modifica_status();
                    cout<<"Aperte x para fechar o programa"<<endl;
                    cin>>opcao4;
                    if(opcao4 == 'x')
                        break;
                }
                else if(opcao3 == 't' ){
                    char opcao5;
                    Troca t = Troca(pot);
                    t.operacao(net.get_user());
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
            int op = 0;
            do{
                try{
                net.fazer_postagem(net.get_user());
                cout<<" "<<endl;
                cout<<" "<<endl;
                op++;
                }catch(exception &e){
                    cout<<"Erro! "<<e.what()<<endl;
                }
            }while(op == 0);
        }

        else if(opcao == 'r'){
            cout<<"Digite o nome da postagem que deseja deletar: "<<endl;
            std::string name_delet;
            cin>> name_delet;
            net.deleta_postagem(net.get_user(), name_delet);
            cout<<" "<<endl;
            cout<<" "<<endl;
        
        }

        else if(opcao == 'e'){
            net.get_user().mostra_usuario();
        }

        else if(opcao == 'x'){
            break;
        }
    }

}