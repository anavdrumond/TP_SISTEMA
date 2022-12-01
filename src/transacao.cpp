#include <iostream>
#include "transacao.hpp"
#include "postagem.hpp"
#include "venda.hpp"
#include "troca.hpp"

void Transacao::tipo_acordo(char opcao,Usuario perf){
    if(opcao == 'v'){
        int cabra = 6;
        Venda v = Venda(cabra);
        v.operacao(perf);
        v.modifica_status();
    }

    if(opcao == 't'){
        int oi = 9;
        Troca t = Troca(oi);
        t.operacao(perf);
        t.modifica_status();
    }
};
