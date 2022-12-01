/**
 * @file intruso.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Rede
 * @version 1.0
 * @date 2022-11-20
 * @details A classe endereco é responsável por armazenar a cidade e o estado
 * do usuário, os quais aparecerão nas postagens e no usuário.
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>
#include"usuario.hpp"

class Rede{
    private:
    Usuario perfil;
    std::vector <Postagem> postagens;
    std::vector <Usuario> perfis;
    std::string postagem_apagar;

    public:
    Rede(Usuario perfil_);
    void deleta_postagem(Usuario us, std::string postagem_apagar);
    void cancela_usuario(Usuario us); 
    void fazer_postagem(Usuario us);
    Postagem pesquisa_postagem();
    Usuario pesquisa_usuario();
    void compra_moeda(Usuario us);
    void adiciona_amigo(Usuario us);

};