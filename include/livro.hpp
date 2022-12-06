/**
 * @file livro.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Livro
 * @version 1.0
 * @date 2022-11-20
 * @details A classe livro é responsável por armazenar os dados de um livro, o qual 
 * será postado e utilizado na classe postagem.
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>
#pragma once

/**
 * @brief Armazena os dados de um livro
 * 
 * @details Os dados são coletados a partir de funções gets. Essas informações serão usadas na classe postagem posteriormente.
 * 
 */
class Livro{
    private:

    /**
     * @brief nome do livro
     */
    std::string obra;

    /**
     * @brief nome do autor do livro
     */
    std::string autor;

    /**
     * @brief nome da editora
     */
    std::string editora;

    /**
     * @brief condicao do livro
     */
    std::string condicao;

    /**
     * @brief ano do livro
     */
    int ano;

    public:
    
    /**
     * @brief Construtor padrão de livro
     */
    Livro() = default;

    /**
     * @brief Construtor de livro
     */
    Livro(std::string obra_, std::string autor_, std::string editora_, std::string condicao_, int ano_);   

    /**
     * @brief Funcão para armazenar o nome do livro. Retorna uma string.
     */
    std::string get_obra();

    /**
     * @brief Funcão para armazenar o nome do autor. Retorna uma string.
     */
    std::string get_autor();

    /**
     * @brief Funcão para armazenar o nome da editora. Retorna uma string.
     */
    std::string get_editora();

    /**
     * @brief Funcão para armazenar a condição do livro. Retorna uma string.
     */
    std::string get_condicao();
    
    /**
     * @brief Funcão para armazenar o ano da obra. Retorna um inteiro.
     */
    int get_ano();
};


