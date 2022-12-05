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
    std::string mensagem;

public:
    NomeInvalido(std::string titulo);
    const char* what() const noexcept;

};

class condicaoInvalida: public std::exception{
    std::string cond;
public:
    condicaoInvalida(std::string cond);
    const char* what() const noexcept;
};