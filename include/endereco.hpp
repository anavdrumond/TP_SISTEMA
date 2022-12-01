/**
 * @file endereco.hpp
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
 */

class Endereco {
    public:
    /**
     * @brief cidade do usuario. 
     * Aparece em cada post do usuário
     */
        std::string cidade;

    /**
     * @brief Construtor padrão da classe Endereco.
     */
    Endereco() = default;    

    /**
     * @brief estado de residencia do usuario. 
     * Aparece em cada post do usuário.
     */
    std::string uf;

    /**
     * @brief Contrutor da calsse Endereco
     * 
     * @details Recebe como parametros cidade e uf,     
     * que serão preenchidas pelo usuario.
    */
    Endereco(std::string _cidade, std::string _uf);

    /**
     * @brief Função para pegar o valor da variavel cidade
    */
    std::string get_cidade();

    /**
     * @brief Função para pegar o valor da variavel uf
     */
    std::string get_uf();
};