#include "TUTexto.h"

const string TUTexto::TEXTO_VALIDO = "Este texto possui menos de 50 caracteres";
const string TUTexto::TEXTO_INVALIDO = "Este texto possui um pouco mais de 50 caractereeeeees";
const int TUTexto::SUCESSO;
const int TUTexto::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUTexto::setUp() {
	texto = new Texto();
	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUTexto::tearDown() {
	delete texto;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUTexto::testeSucesso() {
	try {
		texto->setTexto(TEXTO_VALIDO);

		//Tambem eh verificado se o atributo foi realmente setado atraves de
		//uma comparacao entre o que deve ser setado e o metodo get
		if (texto->getTexto().compare(TEXTO_VALIDO) != 0) {
			estado = FALHA;
		}
	}
	
	//Caso seja lancada uma excecao com um valor valido, o teste de unidade falha
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

//No teste de falha, caso um valor invalido consiga ser setado houve uma falha na funcao de verificacao da classe
void TUTexto::testeFalha() {
	try {
		texto->setTexto(TEXTO_INVALIDO);

		//Caso o bloco try chegue a linha de codigo seguinte, significa que o teste falhou
		estado = FALHA;
	}
	catch(invalid_argument &ex) {
		return;
	}
}

//O metodo run ira rodar todo o teste de unidade
int TUTexto::run() {
	setUp();
	testeSucesso();
	testeFalha();
	tearDown();

	return estado;
}