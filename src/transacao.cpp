#include <iostream>
#include "transacao.hpp"

Transacao::Transacao(std::string status_){
    status = status_;
};

void Transacao::tipo_acordo(char opcao){
    if(opcao == 'v'){
        Venda v;
    }

    if(opcao == 't'){

        Troca t;
    }



};