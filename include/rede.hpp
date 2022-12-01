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
#pragma once

class Rede{
    private:
    Usuario perfil;
    std::vector <Postagem> postagens;
    std::vector <Usuario> perfis;
    std::string postagem_apagar;

    public:
    Rede(Usuario perfil_);
    void deleta_postagem(Usuario us, std::string postagem_apagar);
    void fazer_postagem(Usuario us);
    void pesquisa_postagem(std::string livro_pesquisar);
    void pesquisa_usuario(std::string apelido_pesquisar);
    void compra_moeda(Usuario us);

};