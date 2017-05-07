#ifndef _TUSENHA_H_INCLUDED
#define _TUSENHA_H_INCLUDED

#include "Senha.h"

class TUSenha {

private:
	const static string SENHA_VALIDA;
	const static string SENHA_INVALIDA;

	Senha *senha;
	int estado;

	void setUp();
	void tearDown();
	void testeSucesso();
	void testeFalha();

public:
	const static int SUCESSO = 1;
	const static int FALHA = 0;

	int run();
};

#endif