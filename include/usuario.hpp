#include <iostream>
#include <string>
#include "endereco.hpp"

class Usuario {
    private:
        std::string nome;
        std::string telefone;
        std::string senha;
        std::string email;
        Endereco endereco;
        std::vector <postagem>;
        int idUsuario;
        int moeda;

    public:
        Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, int _idUsuario, int _moeda);

        set_endereco(Endereco _endereco);
        recebe_postagem(postagem p);

};