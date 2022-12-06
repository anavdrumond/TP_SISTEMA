/**
 * @file postagem.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Postagem
 * @version 1.0
 * @date 2022-11-20
 * @details A classe postagem....
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>
#include "livro.hpp"
#pragma once

/**
 * @brief Armazena os livros postados pelo usuário.
 */
class Postagem{
    private:
    Livro produto;
    std::string descricao;
    std::string apelido;
    std::string nome_post;
    std::string categoria;
    float preco;

    public:
    Postagem()=default;
    Postagem(std::string apelido_, std::string descricao_, float preco_, std::string _cat,std::string name_p);

    void set_livro(Livro l);

    std::string get_categoria();
    std::string get_nome_post();
    std::string get_apelido();
    std::string get_descricao();
    Livro get_livro();
    float get_preco();

/**
 * @brief exibe as postagens realizadas.
 */
    void mostra_postagem();

};