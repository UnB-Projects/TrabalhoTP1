#ifndef _TUBLOG_H_INCLUDED
#define _TUBLOG_H_INCLUDED

#include "Blog.h"

class TUBlog {

private:
	const static string NOME_VALIDO;
	const static string AUTOR_VALIDO;
	const static string POSTAGEM_VALIDA;

	Blog *blog;
	Nome *nomeAutor;
	Nome *nomeBlog;
	Texto *textoPostagem;
	int estado;

	void setUp();
	void tearDown();
	void testeSucesso();

public:
	const static int SUCESSO = 1;
	const static int FALHA = 0;

	int run();
};

#endif