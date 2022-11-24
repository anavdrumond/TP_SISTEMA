//USUARIO.CPP

#include "usuario.hpp"
#include "endereco.hpp"

//RESOLVER PARTE DO ENDERECO
Usuario::Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, int _idUsuario, int _moeda){

        nome = _nome;
        telefone = _telefone;
        senha = _senha;
        email = _email;
        idUsuario = _idUsuario;
        moeda = _moeda;
    };
    