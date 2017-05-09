#include "TUUsuario.h"

const string TUUsuario::NOME_VALIDO = "Gabriel Mourao";
const string TUUsuario::EMAIL_VALIDO = "gabriel@outlook.com";
const string TUUsuario::SENHA_VALIDA = "12345";
const int TUUsuario::SUCESSO;
const int TUUsuario::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUUsuario::setUp() {
	usuario = new Usuario();
	nome = new Nome();
	email = new Email();
	senha = new Senha();

	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUUsuario::tearDown() {
	delete usuario;
	delete nome;
	delete email;
	delete senha;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUUsuario::testeSucesso() {
	try {
		nome->setNome(NOME_VALIDO);
		email->setEmail(EMAIL_VALIDO);
		senha->setSenha(SENHA_VALIDA);
		usuario->setNome(*nome);
		usuario->setEmail(*email);
		usuario->setSenha(*senha);

		if (usuario->getNome().getNome().compare(NOME_VALIDO) != 0) {
			estado = FALHA;
		}
		else if (usuario->getEmail().getEmail().compare(EMAIL_VALIDO) != 0) {
			estado = FALHA;
		}
		else if (usuario->getSenha().getSenha().compare(SENHA_VALIDA) != 0) {
			estado = FALHA;
		}
	}
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

///O metodo run ira rodar todo o teste de unidade
int TUUsuario::run() {
	setUp();
	testeSucesso();
	tearDown();

	return estado;
}