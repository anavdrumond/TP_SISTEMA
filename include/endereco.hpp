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
     * @brief Adiciona a nova senha à estrutura senha_vazada
     * 
     * @details A parte alfabética da string, ou seja,
     * a senha digitada pelo usuário, é mapeada para os seus
     * correspondentes numéricos, também contidos na string. 
     * Esses números são armazenados na estrutura senha_vazada.
     * 
     * @param vazou string contendo a senha no formato
     * 10 valores numéricos (0-9) separados por espaços em 
     * branco indicando a associação entre letras (A-E) e o 
     * par de inteiros da criptografia de senha. Os últimos
     * caracteres contém a senha de 6 dígitos também separada 
     * por espaços em branco.  
     */
    Endereco(std::string _cidade, std::string _uf);
};