#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <iostream>
#include <stdexcept> 
#include "Interfaces.h"

#include "Email.h"
#include "Senha.h"
#include <iostream>

#include <stdexcept> 

using namespace std;

class StubLNAutenticacao:public ILNAutenticacao{  // classe implementa interface.

public:

    // Definição de valor a ser usado como gatilho para falha.
    const static string TRIGGER_FALHA;
    const static string TRIGGER_ERRO_SISTEMA;
    // Declaração de método previsto na interface.

    ResultadoAutenticacao autenticar(const Email&, const Senha&) throw(runtime_error);
};


// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe stub da interface ILNBlog.

class StubLNBlog:public ILNBlog{  // classe implementa a interface.

public:
    ResultadoBlog criar(const Blog&) throw(runtime_error);
    ResultadoBlog excluir(const Codigo&) throw(runtime_error);
    ResultadoBlog pesquisar(const Codigo&) throw(runtime_error);
    ResultadoBlog editar(const Blog&) throw(runtime_error);
};


#endif
