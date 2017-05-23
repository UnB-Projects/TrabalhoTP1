#ifndef _TUPOSTAGEM_H_INCLUDED
#define _TUPOSTAGEM_H_INCLUDED

#include "Postagem.h"

/**
*Classe que realiza o teste de unidade da classe Postagem
*/

class TUPostagem {

private:
	const static string POSTAGEM_VALIDA;
	const static int AVALIACAO_VALIDA = 3;

	Postagem *postagem;
	Texto *textoPostagem;
	Avaliacao *avaliacao;

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