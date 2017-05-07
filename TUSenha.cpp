#include "TUSenha.h"

const string TUSenha::SENHA_VALIDA = "12345";
const string TUSenha::SENHA_INVALIDA = "123456";
const int TUSenha::SUCESSO;
const int TUSenha::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUSenha::setUp() {
	senha = new Senha();
	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUSenha::tearDown() {
	delete senha;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUSenha::testeSucesso() {
	try {
		senha->setSenha(SENHA_VALIDA);

		//Tambem eh verificado se o atributo foi realmente setado atraves de uma comparacao
		//entre o que deve ser setado e o metodo get
		if (senha->getSenha().compare(SENHA_VALIDA) != 0) {
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
void TUSenha::testeFalha() {
	try {
		senha->setSenha(SENHA_INVALIDA);

		//Caso o bloco try chegue a linha de codigo seguinte, significa que o teste falhou
		estado = FALHA;
	}
	catch(invalid_argument &ex) {
		return;
	}
}

//O metodo run ira rodar todo o teste de unidade
int TUSenha::run() {
	setUp();
	testeSucesso();
	testeFalha();
	tearDown();

	return estado;
}