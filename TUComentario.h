#ifndef _TUCOMENTARIO_H_INCLUDED
#define _TUCOMENTARIO_H_INCLUDED

#include "Comentario.h"

/**
*Classe que realiza o teste de unidade da classe Comentario
*/

class TUComentario {

private:
	const static string AUTOR_VALIDO;
	const static string COMENTARIO_VALIDO;

	Comentario *comentario;
	Nome *nomeAutor;
	Texto *textoComentario;
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