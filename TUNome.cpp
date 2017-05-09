#include "TUNome.h"

string TUNome::NOME_VALIDO = "Igor Figueira";
string TUNome::NOME_INVALIDO = "Mais de vinte caracteres";

const int TUNome::SUCESSO;
const int TUNome::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUNome::setUp() {
	nome = new Nome();
	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUNome::tearDown() {
	delete nome;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUNome::testeSucesso() {
	try{
		nome->setNome(NOME_VALIDO);

		//Tambem eh verificado se o atributo foi realmente setado atraves de
		//uma comparacao entre o que deve ser setado e o metodo get
		if (nome->getNome().compare(NOME_VALIDO) != 0) {
			estado = FALHA;
		}
	}

	//Caso seja lancada uma excecao com um valor valido, o teste de unidade falha
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

//No teste de falha, caso um valor invalido consiga ser setado houve uma falha na funcao de verificacao da classe
void TUNome::testeFalha() {
	try {
		nome->setNome(NOME_INVALIDO);

		//Caso o bloco try chegue a linha de codigo seguinte, significa que o teste falhou
		estado = FALHA;
	}
	catch(invalid_argument &ex) {
		return;
	}
}

///O metodo run ira rodar todo o teste de unidade
int TUNome::run() {
	setUp();
	testeSucesso();
	testeFalha();
	tearDown();

	return estado;
}