/**
 * @file intruso.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Troca
 * @version 1.0
 * @date 2022-11-20
 * @details A classe troca é responsável por gerir esse tipo de transação.
 * Desse modo, ela herda e implementa funções da classe mãe para permitir 
 * essa ação no programa.
 * @copyright GNU General Public License v2.0
 */

#include <iostream>
#include "transacao.hpp"
#include "usuario.hpp"
#pragma once

/**
 * @brief Classe filha de transacao
 * 
 * @details Implementa as funções da classe mãe para a troca de livros.
 */
class Troca:public Transacao {

    public:

    /**
     * @brief Modifica o status para trocado
     * 
     */
    void modifica_status() override;

    /**
     * @brief Implementa a operação de troca.
     * 
     * @details É feita uma busca dentre os livros cadastrados pelo usuário e posto aquele selecionado a troca.
     */
    std::string operacao(Usuario u) override;

    /**
     * @brief Seta postagem.
     *
     */
    void set_post(Postagem pop) override;

    /**
     * @brief Construtor de troca.
     * 
     * @details Recebe como parâmetro a postagem colocada à troca.
     */
    Troca(Postagem p);
};

//COLOCAR ENDEREÇO