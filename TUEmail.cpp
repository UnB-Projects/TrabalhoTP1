#include "TUEmail.h"

const string TUEmail::EMAIL_VALIDO = "igorfgds@gmail.com";
const string TUEmail::EMAIL_INVALIDO = "igor.dinossauro@com";
const int TUEmail::SUCESSO;
const int TUEmail::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUEmail::setUp() {
	email = new Email();
	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUEmail::tearDown() {
	delete email;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUEmail::testeSucesso() {
	try {
		email->setEmail(EMAIL_VALIDO);

		//Tambem eh verificado se o atributo foi realmente setado atraves de uma comparacao
		//entre o que deve ser setado e o metodo get
		if (email->getEmail().compare(EMAIL_VALIDO) != 0) {
			estado = FALHA;
		}
	}
	//Caso seja lancada uma excecao com um valor valido, o teste de unidade falha
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

//No teste de falha, caso um valor invalido consiga ser setado
//houve uma falha na funcao de verificacao da classe
void TUEmail::testeFalha() {
	try {
		email->setEmail(EMAIL_INVALIDO);

		//Caso o bloco try chegue a linha de codigo seguinte, significa que o teste falhou
		estado = FALHA;
	}
	catch(invalid_argument &ex) {
		return;
	}
}

//O metodo run ira rodar todo o teste de unidade
int TUEmail::run() {
	setUp();
	testeSucesso();
	testeFalha();
	tearDown();

	return estado;
}