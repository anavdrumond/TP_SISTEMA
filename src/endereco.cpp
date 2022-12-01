#include "endereco.hpp"

Endereco::Endereco (std::string _cidade, std::string _uf){

    cidade = _cidade;
    uf = _uf;
};

std::string Endereco::get_cidade(){
    return cidade;
}
std::string Endereco::get_uf(){
    return uf;
}