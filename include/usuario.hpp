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
        int moeda;

        std::vector <Postagem> conj_post;

    public:
        Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, int _idUsuario, int _moeda);

        void recebe_postagem(Postagem p);
};