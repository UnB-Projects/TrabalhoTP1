#ifndef _TUNOME_H_INCLUDED
#define _TUNOME_H_INCLUDED

#include <vector>
#include "Nome.h"

class TUNome {

private:
	static vector<string> NOMES_VALIDOS;
	static vector<string> NOMES_INVALIDOS;

	Nome *nome;
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