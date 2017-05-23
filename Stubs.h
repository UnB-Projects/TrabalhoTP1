#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Resultados.h"
#include "IUAutenticacao.h"
#include "Email.h"
#include "Senha.h"

class StubLNAutenticacao:public ILNAutenticacao{  // classe implementa interface.

public:

    // Definição de valor a ser usado como gatilho para falha.

    const static string TRIGGER_FALHA;
    const static string TRIGGER_ERRO_SISTEMA;

    // Declaração de método previsto na interface.

    ResultadoAutenticacao autenticar(const Email&, const Senha&) throw(runtime_error);
};

#endif