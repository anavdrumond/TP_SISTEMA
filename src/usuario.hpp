
#include <iostream>
#include <vector>
#include "endereco.hpp"
#include "postagem.hpp"
#pragma once

class Usuario {
    private:
        std::string nome;
        std::string telefone;
        std::string senha;
        std::string email;
        std::string idUsuario;
        float carteira; 
        Endereco endereco;

    public:
        Usuario() = default;
        Usuario(std::string _nome, std::string _telefone, std::string _email, std::string _idUsuario, float _carteira, std::string _senha);

        std::vector <std::string> conj_post;

        void recebe_postagem(std::string p);
        std::string get_idusuario();

        void modifica_carteira(float valor, char op);

        void mostra_usuario();

        void set_endereco(Endereco end_);
};