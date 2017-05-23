#ifndef IUAUTENTICACAO_H_INCLUDED
#define IUAUTENTICACAO_H_INCLUDED

#include <iostream>
#include "Resultados.h"
#include "Email.h"
#include "Senha.h"

using namespace std;

class IUAutenticacao;
class ILNAutenticacao;
class CntrIUAutenticacao;

class IUAutenticacao {
public:
	virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;
	virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};

class ILNAutenticacao {
public:
	virtual ResultadoAutenticacao autenticar(const Email&, const Senha&) throw(runtime_error) = 0;
};

class CntrIUAutenticacao:public IUAutenticacao {    // observe que a classe implementa interface.

private:

	// Referência para servidor.

	ILNAutenticacao *cntrLNAutenticacao;

public:

	// Método previsto na interface.

	ResultadoAutenticacao autenticar() throw(runtime_error);

	// Método por meio do qual é estabelecido relacionamento com o servidor.

	void setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao){
		this->cntrLNAutenticacao = cntrLNAutenticacao;
	}
};

#endif