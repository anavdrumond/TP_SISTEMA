
/**
 * @file usuario.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Endereco
 * @version 1.0
 * @date 2022-11-20
 * @details A classe usuario cria o objeto usuário. Objeto , este ,
 * que utilizará das funcionalidades do sistema.
 *
 * @copyright GNU General Public License v2.0
 * 
 */
#include <iostream>
#include <vector>
#include "endereco.hpp"
#include "postagem.hpp"
#pragma once

/**
 * @brief Armazena os dados de um usuario, recebe as postagens realizadas pelo
 * usuario e modifica a carteira, caso o usuario compre um livro de outro usuario.
 */
class Usuario {
    private:
    /**
    * @brief nome do usuario.
    */
        std::string nome;

    /**
    * @brief telefone do usuario.
    */
        std::string telefone;

        /**
        * @brief senha do perfil cadastrado do usuario.
        */
        std::string senha;

        /**
        * @brief email do perfil cadastrado pelo usuario.
        */
        std::string email;

        /**
        * @brief nome/apleido de identificação do usuario.
        */
        std::string idUsuario;

        /**
        * @brief referente ao saldo de dinheiro disponivel pelo usuario,
        * para ser resgatado e utilizado em compra, ou será somado caso
        * realize alguma venda;
        */
        float carteira; 
        
        /**
        * @brief instanciando variável do tipo endereco. A variável recebe
        * a cidade e UF cadastrados pelo usuario.
        */
        Endereco endereco;

    public:
        /**
        * @brief construtor padrão de Usuario.
        */
        Usuario() = default;

        /**
        * @brief construtor de Usuario.
        */
        Usuario(std::string _nome, std::string _telefone, std::string _email, std::string _idUsuario, float _carteira, std::string _senha);

        /**
        * @brief Conjunto de postagens de um usuario.
        * 
        * @details Vector responsável por armazenar as postagens realizadas pelo usuário a partir do nome escolhido.
        */
        std::vector <std::string> conj_post;

        /**
        * @brief função para armazenar a postagem realizada.
        * 
        *@param p se refere ao nome da postagem a ser recebida.
        */
        void recebe_postagem(std::string p);

        /**
        * @brief Funçao criada para armazenar o id do usuario.
        */
        std::string get_idusuario();
        std::string get_senha();
        std::string get_email();

        /**
        * @brief Funçao criada para modificar o saldo na carteira do usuario,
        * dependendo se ele comprou ou vendeu algum livro.
        * 
        * @param valor se refere ao valor disponivel na carteira do usuario
        * @param op se refere à operação escolhida pelo usuario (se compra ou troca).
        */
        void modifica_carteira(float valor, char op);

        /**
        * @brief Funçao criada para armazenar o id do usuario.
        */

        /**
        * @brief Funçao criada para mostrar os dados publicos de um usuario, incluido 
        * seu vetor de postagens disponíveis.
        */
        void mostra_usuario();

        /**
        * @brief Funçao criada para incluir o endereço. 
        */
        void set_endereco(Endereco end_);
};