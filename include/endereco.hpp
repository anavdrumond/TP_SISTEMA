#include <iostream>
#include <string>

class Endereco {
    private:
        int cep;
        std::string rua;
        std::string bairro;
        std::string cidade;
        std::string uf;
        std::string pais;

    public:
        Endereco(int _cep, std::string _rua, std::string _bairro, 
        std::string _cidade, std::string _uf, std::string _pais);
};