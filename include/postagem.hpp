/**
 * @file intruso.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Postagem
 * @version 1.0
 * @date 2022-11-20
 * @details A classe endereco é responsável por armazenar a cidade e o estado
 * do usuário, os quais aparecerão nas postagens e no usuário.
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>
#include "livro.hpp"

class Postagem{
    private:
    Livro produto;
    std::string descricao;
    std::string apelido;
    std::string nome_post;
    std::string categoria;


    public:
    float preco;
    Postagem(std::string apelido_, std::string descricao_, float preco_, std::string categoria);

    void set_livro(Livro l);

    std::string get_categoria();

};