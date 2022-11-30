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
        std::string idUsuario;
        float carteira; 

    public:
        Usuario(std::string _nome, std::string _telefone, std::string _senha, 
        std::string _email, std::string _idUsuario, float _carteira);

        std::vector <std::string> conj_post;
        std::vector <std::string> conj_amigos;

        void recebe_postagem(std::string p);
        std::string get_idusuario();

        //COLOCAR NA REDE

        void modifica_carteira(float valor, char op);


};
