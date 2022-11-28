#include <iostream>
#include "transacao.hpp"
#include "postagem.hpp"
#include "venda.hpp"
#include "troca.hpp"

Transacao::Transacao(){
   
};

void Transacao::tipo_acordo(char opcao){
    if(opcao == 'v'){
        Venda v;
    }

    if(opcao == 't'){
        Troca t;
    }
};



//Pensar melhor no status !!!!!!!!!!