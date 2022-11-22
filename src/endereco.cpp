#include "endereco.hpp"

Endereco::Endereco (int _cep, std::string _rua, std::string _bairro, 
    std::string _cidade, std::string _uf, std::string _pais){

        cep = _cep;
        rua = _rua;
        bairro = _bairro;
        cidade = _cidade;
        uf = _uf;
        pais = _pais;
    };