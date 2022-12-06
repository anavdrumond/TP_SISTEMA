/**
 * @file intruso.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Venda
 * @version 1.0
 * @date 2022-11-20
 * @details A classe endereco é responsável por armazenar a cidade e o estado
 * do usuário, os quais aparecerão nas postagens e no usuário.
 *
 * @copyright GNU General Public License v2.0
 * 
 */
#include <iostream>
#include "transacao.hpp"
#include "usuario.hpp"
#pragma once

/**
 * @brief Instacia a venda no sistema.
 * 
 * @details Implementa as operações necessárias para a venda de livros entre os usuários.
 * Assim, os status assim como a lógica necessário são instanciadas aqui.
 */
class Venda:public Transacao {

    public:
    /**
     * @brief Função que atualiza o status do livro.
     * 
     * @details A função é herdada da classe transacao. Aqui ela é implementada tendo a venda em mente, assim,
     * o livro assumi o status vendido.
     */
    void modifica_status() override;

    /**
     * @brief Implementa a operação de venda.
     * 
     * @details A função recebe um parâmetro do tipo usuario. O preço do livro é recebido por uma função get e a partir
     * do modifica_carteira() o saldo do perfil é utilizado.
     */
    std::string operacao(Usuario u) override;

    /**
     * @brief Seta postagem.
     */
    void set_post(Postagem pop) override;

    /**
     * @brief Construtor de venda.
     */
    Venda(Postagem p);
};