//USUARIO.HPP
#include <iostream>
#include <vector>
#include "endereco.hpp"
#include "postagem.hpp"

class Usuario {
    private:
        std::string nome;
        std::string telefone;
        std::string senha;
        std::string email;
        std::string rel_cep;
        int idUsuario;

        std::vector <std::string> conj_post;
        std::vector <std::string> conj_amigos;

    public:
        Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, int _idUsuario, float _carteira);

        float carteira;  

        void recebe_postagem(std::string p);

        void adiciona_amigo();//COLOCAR NA REDE

        void modifica_carteira(float valor, char op);
};