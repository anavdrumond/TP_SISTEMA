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

class Venda:public Transacao {

    public:
    void modifica_status() override;
    std::string operacao(Usuario u) override;
    float get_preco() override;
    Venda();
};