#ifndef _TUUSUARIO_H_INCLUDED
#define _TUUSUARIO_H_INCLUDED

#include "Usuario.h"

/**
*Classe que realiza o teste de unidade da classe Usuario
*/

class TUUsuario {

private:
	const static string NOME_VALIDO;
	const static string EMAIL_VALIDO;
	const static string SENHA_VALIDA;

	Usuario *usuario;
	Nome *nome;
	Email *email;
	Senha *senha;
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