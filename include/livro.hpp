#include<iostream>

class Livro{
    private:
    std::string nome;
    std::string autor;
    std::string editora;
    std::string condicao;
    std::string tipo;
    int ano;

    public:
    Livro(std::string nome_, std::string autor_, std::string editora_, std::string condicao_, std::string tipo_, int ano_);   
    std::string get_nome();
    std::string get_autor();
    std::string get_editora();
    std::string get_condicao();
    std::string get_tipo();
    int get_ano();
};


