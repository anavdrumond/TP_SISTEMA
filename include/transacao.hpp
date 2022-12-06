/**
 * @file transacao.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Transacao
 * @version 1.0
 * @date 2022-11-20
 * @details A classe endereco é responsável por armazenar a cidade e o estado
 * do usuário, os quais aparecerão nas postagens e no usuário.
 *
 * @copyright GNU General Public License v2.0
 * 
 */
#include <iostream>
#include "postagem.hpp"
#include "usuario.hpp"
#pragma once

/**
 * @brief Realiza a transação do sistema.
 * 
 * @details Implementa a lógica de transação do sistema (troca ou venda) e modifica o status do livro.
 */
class Transacao{
   
    public:

    /**
     * @brief Postagem
     * 
     */
    Postagem postag;

    /**
     * @brief Atualiza o status do livro.
     * 
     * @details Função virtual que é herdado por venda e troca e implementada por elas.
     * 
     */
    virtual void modifica_status() = 0;

    /**
     * @brief Defini a operação realizada (venda ou troca).
     * 
     * @details Por ser virtual, a função é implementada pelas classes filhas.
     */
    virtual std::string operacao(Usuario u) = 0;

    /**
     * @brief Seta postagem.
     * 
     * @details Função virtual não implementada em transacao, mas sim em venda e troca.
     */
    virtual void set_post(Postagem p) = 0;

    /**
     * @brief 
     * 
     */
    std::string status = "Disponivel para: troca / venda";

    /**
     * @brief Get the status object
     *  
     */
    std::string get_status();
    
    /**
     * @brief Construtor de transacao.
     * 
     * @details
     *
     */
    Transacao(Postagem p);
};
