#include <iostream>
#include "transacao.hpp"
#include "postagem.hpp"
#include "venda.hpp"
#include "troca.hpp"

void Transacao::tipo_acordo(char opcao,Usuario perf){
    if(opcao == 'v'){
        Venda v = Venda();
        v.operacao(perf);
        v.modifica_status();
    }

    if(opcao == 't'){
        Troca t = Troca();
        t.operacao(perf);
        t.modifica_status();
    }
};
