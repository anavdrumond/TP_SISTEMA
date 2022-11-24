//USUARIO.HPP
#include <iostream>
#include <vector>
#include "endereco.hpp"

class Usuario {
    private:
        std::string nome;
        std::string telefone;
        std::string senha;
        std::string email;
        std::vector <Endereco> post; //duvida
        int idUsuario;
        int moeda;

    public:
        Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, int _idUsuario, int _moeda);

        void set_endereco(Endereco _endereco);
        void recebe_postagem(Postagem p);
};