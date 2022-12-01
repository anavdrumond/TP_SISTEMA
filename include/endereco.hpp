/**
 * @file intruso.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Endereco
 * @version 1.0
 * @date 2022-11-20
 * @details A classe endereco é responsável por armazenar a cidade e o estado
 * do usuário, os quais aparecerão nas postagens e no usuário.
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include <iostream>
#include <string>
#pragma once 

/**
 * @brief Armazena cidade e estado de um usuário em seus posts
 * 
 */

class Endereco {
    public:
    /**
     * @brief cidade do usuario. 
     * Aparece em cada post do usuário
     */
        std::string cidade;

    /**
     * @brief estado de residencia do usuario. 
     * Aparece em cada post do usuário.
     */
        std::string uf;

     /**
     * @brief Contrutor da calsse Endereco
     * 
     * @details inicializa a estrutura indices_associacao 
     * inicializa a estrutura indices_associacao 
     * com as posições pré-definidas da string de entrada,
     * indicando os índices de correspondência numérica de
     * cada letra. Inicialização nula do valor num_senhas.      
     * 
     */
    Endereco() = default;
    Endereco(std::string _cidade, std::string _uf);
    std::string get_cidade();
    std::string get_uf();
};