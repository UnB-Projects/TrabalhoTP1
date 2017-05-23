#ifndef _TUEMAIL_H_INCLUDED
#define _TUEMAIL_H_INCLUDED

#include "Email.h"

/**
*Classe que realiza o teste de unidade da classe Email
*/

class TUEmail {

private:
	const static string EMAIL_VALIDO;
	const static string EMAIL_INVALIDO;

	Email *email;
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