#ifndef _TUTEXTO_H_INCLUDED
#define _TUTEXTO_H_INCLUDED

#include "Texto.h"

/**
*Classe que realiza o teste de unidade da classe Texto
*/

class TUTexto {

private:
	const static string TEXTO_VALIDO;
	const static string TEXTO_INVALIDO;

	Texto *texto;
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