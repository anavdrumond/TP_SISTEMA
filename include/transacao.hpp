/**
 * @file intruso.hpp
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
 * @brief 
 */
class Transacao{
   
    public:
    Postagem postag;
    virtual void modifica_status() = 0;
    virtual std::string operacao(Usuario u) = 0;

    void set_post(Postagem p);
    std::string status = "Disponivel para: troca / venda";
    std::string get_status();
    Transacao();
};
