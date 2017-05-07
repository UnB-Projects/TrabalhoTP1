#include "TUPostagem.h"

const string TUPostagem::POSTAGEM_VALIDA = "O curso de ciencia da computacao eh trabalhoso";
const int TUPostagem::AVALIACAO_VALIDA;
const int TUPostagem::SUCESSO;
const int TUPostagem::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUPostagem::setUp() {
	postagem = new Postagem();
	textoPostagem = new Texto();
	avaliacao = new Avaliacao();

	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUPostagem::tearDown() {
	delete postagem;
	delete textoPostagem;
	delete avaliacao;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUPostagem::testeSucesso() {
	try {
		textoPostagem->setTexto(POSTAGEM_VALIDA);
		avaliacao->setAvaliacao(AVALIACAO_VALIDA);
		postagem->setPostagem(*textoPostagem);
		postagem->setAvaliacao(*avaliacao);

		if (postagem->getPostagem().getTexto().compare(POSTAGEM_VALIDA) != 0) {
			estado = FALHA;
		}
		else if (postagem->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA) {
			estado = FALHA;
		}
	}
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

//O metodo run ira rodar todo o teste de unidade
int TUPostagem::run() {
	setUp();
	testeSucesso();
	tearDown();

	return estado;
}