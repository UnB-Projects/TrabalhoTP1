#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Resultados.h"
#include "Email.h"
#include "Senha.h"

#include <stdexcept>

using namespace std;

// Declaracoes adiantadas 

class ILNAutenticacao;
class ILNBlog;

class IUAutenticacao {
public:
	virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;
	virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};




class IUBlog { // $ no exemplo do prof projeto equivale a Contas desse projeto
public:	
	// metodo por meio do qual eh solicitado autenticacao
	
	virtual void executar(const Email&) throw(runtime_error) = 0;
	
	// metodo por meio do qual eh estabelecida ligacao (link) com a controladora de negocio
	
	virtual void setCntrLNBlog(ILNBlog *) = 0; 
};

// Declarações de serviços na camada de negócio
// ------------------------------------------------------------------

// Declarações de interfaces para serviços na camada de negócio.

// Declaração de interface para o serviço de autenticação na camada de negócio.
class ILNAutenticacao {
public:
	virtual ResultadoAutenticacao autenticar(const Email&, const Senha&) throw(runtime_error) = 0;
};



// Declaração de interface para o serviço de conta na camada de negócio.
/*class ILNBlog {
public:
    //virtual ResultadoBlog Blog(const Blog&) throw(runtime_error) = 0;
    /*virtual ResultadoConta excluir(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoConta editar(const Conta&) throw(runtime_error) = 0;
    virtual ResultadoConta pesquisar(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoConta voltar(const Codigo&) throw(runtime_error) = 0;
};*/


#endif
