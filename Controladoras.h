#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED


#include "Interfaces.h"
#include "Resultados.h"
#include "Email.h"
#include "Senha.h"

#include "Blog.h"


#include <iostream>
#include <stdexcept>
#include <cstdlib>

using namespace std;

//class IUAutenticacao;



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



class CntrIUBlog:public IUBlog {
private:
	
	const static int CRIAR = 1;
	const static int EXCLUIR = 2;
	const static int EDITAR = 3;
	const static int PESQUISAR = 4;
	const static int VOLTAR = 5;
	
	// Referencia para servidor
	
	ILNBlog *cntrLNBlog;
	
	// meotodos responsaveis por prover os servicos
	
	void criar() throw(runtime_error);
	void excluir() throw(runtime_error);
	void editar() throw(runtime_error);
	void pesquisar() throw(runtime_error);
	void voltar() throw(runtime_error);
	
	// Metodo previst na interface
	
public:	

	void executar(const Email&) throw(runtime_error);
	
	// metodo por do qual eh estabelecido relacionamento com o servidor
	
	void setCntrLNBlog (ILNBlog *cntrLNBlog){
		this->cntrLNBlog = cntrLNBlog;
	}

};

#endif
