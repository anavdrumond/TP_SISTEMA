/**
 * @file rede.hpp
 * @author Ana Vitoria Drumond (anadrumond@ufmg.br)
 * @brief Classe Rede
 * @version 1.0
 * @date 2022-11-20
 * @details A classe rede é a principal do progama. Nela são implementadas
 * funções essenciais para o uso do programa, como a manipulação de postagens
 * e o gerenciamento do perfil do usuário.
 *
 * @copyright GNU General Public License v2.0
 * 
 */

#include<iostream>
#include"usuario.hpp"
#include <fstream>

/**
 * @brief Classe responsável pela manutenção do programa.
 * 
 * @details Aqui é onde as principais funções do sistema acontecem. A classe é responsável por gerir as demais e unificá-las em uma
 * aplicação.
 */
class Rede{
    private:
    int cod;
    Usuario perfil;

    /**
     * @brief Vector de postagens.
     * 
     */
    std::vector <Postagem> postagens;

    /**
     * @brief Vector de perfis.
     * 
     * @details É composto pelos perfis de usuários cadastrados.
     */
    std::vector <Usuario> perfis;

    public:

    /**
     * @brief Construtor de rede.
     * 
     */
    Rede(int cod_);

    /**
     * @brief Cadastra o usuário.
     * 
     * @details Reliza o cadasto do usuário a partir de 
     * parâmetros fornecidos por ele. A função recebe esses
     * parâmetros e armazena-os no sistema.
     */
    void fazer_cadastro(char esc);

    /**
     * @brief Armazena a postagem realizada.
     * 
     * @details A função armazena a postagem no sistema 
     * e gera um arquivo correspondente a mesma.
     */
    void preenche_postagem();

    /**
     * @brief Preenche o usuário.
     * 
     * @details Realiza o preenchimento do usuário cadastrado
     * em um arquivo.
     */
    void preenche_user();

    /**
     * @brief Deleta postagens.
     * 
     * @details Recebe como parâmetros o usuário e a postagem
     * que ele deseja apagar. O programa busca o post a partir de seu
     * nome dentro de um vector.
     */
    void deleta_postagem(Usuario us, std::string postagem_apagar);

    /**
     * @brief Realiza postagens.
     * 
     * @details Recebe o usuário como parâmetro e é 
     * pedido as informações do livro que será postado.
     */
    void fazer_postagem(Usuario us);

    /**
     * @brief Pesquisa uma postagem no sistema.
     * 
     * @details A partir do nome dado a postagem, a função realiza
     * um laço "for" para pesquisá-la no programa.
     */
    Postagem pesquisa_postagem(std::string livro_pesquisar);

    /**
     * @brief Busca usuários.
     * 
     * @details Semelhante a função pesquisa_postagem(), pórem o laço
     * "for" busca dentre os usuário cadastrados aquele com o nome 
     * correspondente.
     */
    void pesquisa_usuario(std::string apelido_pesquisar);

    /**
     * @brief Realiza o resgate de moedas.
     * 
     * @details Recebe usuario como parâmetro. A função pergunta quantidade
     * que o usuário deseja resgatar e atualiza sua carteira.
     */
    void compra_moeda(Usuario us);
    Usuario get_user();

};

/**
 * @brief Trata o erro de nome inválido.
 * 
 * @details Resposável por garantir que o usuário digite 
 * o título correto.
 */
class NomeInvalido: public std::exception {
    
    /**
     * @brief Título a ser conferido.
     * 
     */
    std::string _titulo;

    /**
     * @brief Mensagem mostrada ao digitar o título errado.
     * 
     */
    std::string mensagem_nome;

public:
    NomeInvalido(std::string titulo);
    const char* what() const noexcept;

};


/**
 * @brief Confere o status do livro digitado pelo usuário.
 * 
 * @details A função garante que o usuário digite apenas as condições
 * disponiveis nesse momento do cadstro do livro.
 */
class condicaoInvalida: public std::exception{
    std::string _cond;
    std::string mensagem_cond;

public:
    condicaoInvalida(std::string cond);
    const char* what() const noexcept;
};

/**
 * @brief Garante que o usuário digite um ano válido.
 * 
 */
class anoInvalido: public std::exception{
    int _ano;
    std::string mensagem_ano;

public:
    anoInvalido(int ano);
    const char* what() const noexcept;
};

/**
 * @brief Garante que o usuário digite um valor válido
 * para o livro.
 * 
 */
class valorInvalido: public std::exception{
    float _valor;
    std::string mensagem_valor;

public:
    valorInvalido(float valor);
    const char* what() const noexcept;
};

/**
 * @brief Garante que o usuário digite um e-mail válido.
 * 
 */
class emailInvalido: public std::exception{
    std::string _mail;
    std::string mensagem_email;

public:
    emailInvalido(std::string mail);
    const char* what() const noexcept;
};