#include<iostream>
#include"usuario.hpp"

class Rede{
    private:
    Usuario perfil;
    std::vector <Postagem> postagens;
    std::vector <Usuario> perfis;

    public:
    Rede(Usuario perfil_);
    void deleta_postagem();
    void cancela_usuario(); 
    void fazer_postagem();
    Postagem pesquisa_postagem();
    Usuario pesquisa_usuario();
    void compra_moeda();
    void adiciona_amigo();

};