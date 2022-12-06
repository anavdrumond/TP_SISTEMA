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
#include<fstream>
#include"usuario.hpp"

/**
 * @brief Classe responsável por funcionalidas gerais do sistema.
 * 
 * @details Armazena as postagens e usuários em vector. É responsável por funcinalidades básicas do programa como a postagem, geridas pelas funções fazer_postagem() e deleta_postagem(),
 * além de instanciar a compra de moedas e pesquisa de pessoas cadastradas.
 * 
 */
class Rede{
    private:
    int cod;
    Usuario perfil;

    /**
     * @brief Vector de postagem.
     */
    std::vector <Postagem> postagens;

    /**
     * @brief Vector de usuário.
     */
    std::vector <Usuario> perfis;

    public:
    Rede(int cod_);
    void fazer_cadastro(char esc);
    Usuario get_user();
    void preenche_postagem();
    void preenche_user();
    void deleta_postagem(Usuario us, std::string postagem_apagar);

    /**
     * @brief Realiza postagem.
     * 
     * @details Recebendo um parâmetro de tipo usuario, a função solicita informações do livro e realiza sua postagem.
     * 
     */
    void fazer_postagem(Usuario us);
    
    /**
     * @brief Busca postagem por título.
     * 
     * @details A função busca no vector de postagens aquela com o nome correspondente a digitada pelo usuário. 
     */
    Postagem pesquisa_postagem(std::string livro_pesquisar);

    /**
     * @brief Busca usuário.
     * 
     * @details No vector de usuários cadastrados, é buscado aquele com apelido correspondente.
     * 
     */
    void pesquisa_usuario(std::string apelido_pesquisar);

    /**
     * @brief Instancia a compra de moedas
     * 
     * @details Com um parâmetro do tipo usuario, a função realiza o resgate de moedas e atualiza so saldo da carteira.
     * 
     */
    void compra_moeda(Usuario us);

};

/**
 * @brief Classe responsável por entradas inválidas
 * 
 * @details Garante que o usuário digite o que é pedido e permitido pelo sistema.
 * 
 */
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