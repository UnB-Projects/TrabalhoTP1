#include <iostream>
#include <string>
#include <cstdio>
#include "Nome.h"
#include "Email.h"
#include "Senha.h"
#include "Avaliacao.h"
#include "Texto.h"
#include "Usuario.h"
#include "Comentario.h"
#include "Blog.h"
#include "TUNome.h"

using namespace std;

int main () {
	TUNome testeNome;
	int sucesso;

	sucesso = testeNome.run();

	cout << "Teste Nome: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}
}