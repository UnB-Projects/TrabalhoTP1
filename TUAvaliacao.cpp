#include "TUAvaliacao.h"

const int TUAvaliacao::AVALIACAO_VALIDA = 3;
const int TUAvaliacao::AVALIACAO_INVALIDA = 6;
const int TUAvaliacao::SUCESSO;
const int TUAvaliacao::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUAvaliacao::setUp() {
	avaliacao = new Avaliacao();
	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUAvaliacao::tearDown() {
	delete avaliacao;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUAvaliacao::testeSucesso() {
	try {
		avaliacao->setAvaliacao(AVALIACAO_VALIDA);

		//Tambem eh verificado se o atributo foi realmente setado atraves de
		//uma comparacao entre o que deve ser setado e o metodo get
		if (avaliacao->getAvaliacao() != AVALIACAO_VALIDA) {
			estado = FALHA;
		}
	}

	//Caso seja lancada uma excecao com um valor valido, o teste de unidade falha
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

//No teste de falha, caso um valor invalido consiga ser setado houve uma falha na funcao de verificacao da classe
void TUAvaliacao::testeFalha() {
	try {
		avaliacao->setAvaliacao(AVALIACAO_INVALIDA);

		/**
		*Caso o bloco try chegue a linha de codigo seguinte, significa que o teste falhou
		*/
		estado = FALHA;
	}
	catch(invalid_argument &ex) {
		return;
	}
}


///O metodo run ira rodar todo o teste de unidade
int TUAvaliacao::run() {
	setUp();
	testeSucesso();
	testeFalha();
	tearDown();

	return estado;
}