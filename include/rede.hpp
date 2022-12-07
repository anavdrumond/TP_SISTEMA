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
#include <fstream>

/**
 * @brief Classe responsável pela manutenção do programa.
 */
class Rede{
    private:
    int cod;
    Usuario perfil;
    std::vector <Postagem> postagens;
    std::vector <Usuario> perfis;

    public:
    Rede(int cod_);
    void fazer_cadastro(char esc);
    void preenche_postagem();
    void preenche_user();
    void deleta_postagem(Usuario us, std::string postagem_apagar);
    void fazer_postagem(Usuario us);
    Postagem pesquisa_postagem(std::string livro_pesquisar);
    void pesquisa_usuario(std::string apelido_pesquisar);
    void compra_moeda(Usuario us);
    Usuario get_user();

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

class emailInvalido: public std::exception{
    std::string _mail;
    std::string mensagem_email;

public:
    emailInvalido(std::string mail);
    const char* what() const noexcept;
};

class senhaInvalida: public std::exception{
    std::string _sen;
    std::string mensagem_senha;

public:
    senhaInvalida(std::string sen);
    const char* what() const noexcept;
};

class estadoInvalido: public std::exception{
    std::string _est;
    std::string mensagem_estado;

public:
    estadoInvalido(std::string est);
    const char* what() const noexcept;
};