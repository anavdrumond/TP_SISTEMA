/**
 * @file intruso.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Livro
 * @version 1.0
 * @date 2022-11-20
 * @details A classe endereco é responsável por armazenar a cidade e o estado
 * do usuário, os quais aparecerão nas postagens e no usuário.
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>

class Livro{
    private:
    std::string obra;
    std::string autor;
    std::string editora;
    std::string condicao;
    int ano;

    public:
    Livro() = default;
    Livro(std::string obra_, std::string autor_, std::string editora_, std::string condicao_,int ano_);   
    std::string get_obra();
    std::string get_autor();
    std::string get_editora();
    std::string get_condicao();
    int get_ano();
};


