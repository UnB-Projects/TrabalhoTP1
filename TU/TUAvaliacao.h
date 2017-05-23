#ifndef _TUAVALIACAO_H_INCLUDED
#define _TUAVALIACAO_H_INCLUDED

#include "Avaliacao.h"

/**
*Classe que realiza o teste de unidade da classe Avaliacao
*/

class TUAvaliacao {

private:
	const static int AVALIACAO_VALIDA;
	const static int AVALIACAO_INVALIDA;

	Avaliacao *avaliacao;
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