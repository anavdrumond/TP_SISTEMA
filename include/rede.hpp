/**
 * @file rede.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Rede
 * @version 1.0
 * @date 2022-11-20
 * @details A classe rede...
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>
#include"usuario.hpp"

/**
 * @brief Classe responsável pela manutenção do programa.
 */
class Rede{
    private:
    Usuario perfil;
    std::vector <Postagem> postagens;
    std::vector <Usuario> perfis;

    public:
    Rede(Usuario perfil_);
    void deleta_postagem(Usuario us, std::string postagem_apagar);
    void fazer_postagem(Usuario us);
    Postagem pesquisa_postagem(std::string livro_pesquisar);
    void pesquisa_usuario(std::string apelido_pesquisar);
    void compra_moeda(Usuario us);

};

class NomeInvalido: public std::exception {
    std::string _titulo;
    std::string mensagem_nome;

public:
    NomeInvalido(std::string titulo);
    const char* what() const noexcept;

};

class condicaoInvalida: public std::exception{
    std::string _cond;
    std::string mensagem_cond;

public:
    condicaoInvalida(std::string cond);
    const char* what() const noexcept;
};

class anoInvalido: public std::exception{
    int _ano;
    std::string mensagem_ano;

public:
    anoInvalido(int ano);
    const char* what() const noexcept;
};

class valorInvalido: public std::exception{
    float _valor;
    std::string mensagem_valor;

public:
    valorInvalido(float valor);
    const char* what() const noexcept;
};