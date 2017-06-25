#ifndef RESULTADOS_H_INCLUDED
#define RESULTADOS_H_INCLUDED

#include "Email.h"
#include "Senha.h"
#include "Blog.h"

class Resultado {

protected:
	int valor;

public:

	// Declarações de possíveis resultados.

	const static int SUCESSO = 1;
	const static int FALHA   = 0;

	void setValor(int valor){
		this->valor = valor;
	}

	int getValor() const {
		return valor;
	}
};

class ResultadoAutenticacao:public Resultado {

private:
	Email email;

public:
	void setEmail(const Email &email){      // passagem por referência.
		this->email = email;
	}

	Email getEmail() const {
		return email;
	}
};

class ResultadoBlog:public Resultado{
private:
	Blog blog;
public:
	void setBlog(const Blog &blog){
		this->blog = blog;
	}
	
	Blog getBlog() const{
		return blog;
	}
};

#endif
