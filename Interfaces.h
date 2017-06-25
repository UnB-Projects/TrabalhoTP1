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

// Declara��es de servi�os na camada de neg�cio
// ------------------------------------------------------------------

// Declara��es de interfaces para servi�os na camada de neg�cio.

// Declara��o de interface para o servi�o de autentica��o na camada de neg�cio.
class ILNAutenticacao {
public:
	virtual ResultadoAutenticacao autenticar(const Email&, const Senha&) throw(runtime_error) = 0;
};



// Declara��o de interface para o servi�o de conta na camada de neg�cio.
/*class ILNBlog {
public:
    //virtual ResultadoBlog Blog(const Blog&) throw(runtime_error) = 0;
    /*virtual ResultadoConta excluir(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoConta editar(const Conta&) throw(runtime_error) = 0;
    virtual ResultadoConta pesquisar(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoConta voltar(const Codigo&) throw(runtime_error) = 0;
};*/


#endif
