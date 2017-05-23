#include "IUAutenticacao.h"

ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error) {

	ResultadoAutenticacao resultado;
	Email email;
	Senha senha;
	string entrada;

	// Solicitar matricula e senha.

	while(true) {

		cout << endl << "Autenticacao de usuario." << endl << endl;

		try {
			cout << "Digite o Email: ";
			cin >> entrada;
			email.setEmail(entrada);
			cout << "Digite a senha: ";
			cin >> entrada;
			senha.setSenha(entrada);
			break;
		}
		catch (const invalid_argument &exp) {               // catch por referência.
			cout << endl << "Dado em formato incorreto." << endl;
		}
	}

	// Solicitar autenticação.

	resultado = cntrLNAutenticacao->autenticar(email, senha);

	// Informar resultado da autenticação.

	if(resultado.getValor() == ResultadoAutenticacao::FALHA)
	cout << endl << "Falha na autenticacao." << endl;

	return resultado;
}