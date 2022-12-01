/**
 * @file intruso.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Livro
 * @version 1.0
 * @date 2022-11-20
 * @details A classe Livro é responsável por armazenar dados do livro a ser postado.
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>

/**
 * @brief Armazena os dados de um livro, os quais aparecerão em postagem.
 * 
 * @details Implementa a lógica de quebrar senhas de letras
 * utilizada por instituições bancárias onde cada letra é 
 * associada a um par de números, e o usuário deve buscar 
 * a combinação de letras que contém os dígitios da sua senha. 
 * Nessa classe recebemos múltiplas instâncias vazadas da senha
 * de um mesmo usuário, e buscamos a combinação numérica que mais
 * se repete ao longo das instâncias.
 * 
 */

class Livro{
    private:
    std::string obra;
    std::string autor;
    std::string editora;
    std::string condicao;
    int ano;

    public:
    Livro() = default;
    Livro(std::string obra_, std::string autor_, std::string editora_, std::string condicao_, int ano_);   
    std::string get_obra();
    std::string get_autor();
    std::string get_editora();
    std::string get_condicao();
    int get_ano();
};


