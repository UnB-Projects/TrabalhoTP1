#include "TUComentario.h"

const string TUComentario::AUTOR_VALIDO = "Gabriel Mourao";
const string TUComentario::COMENTARIO_VALIDO = "Gostei muito dessa postagem";
const int TUComentario::SUCESSO;
const int TUComentario::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUComentario::setUp() {
	comentario = new Comentario();
	nomeAutor = new Nome();
	textoComentario = new Texto();

	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUComentario::tearDown() {
	delete comentario;
	delete nomeAutor;
	delete textoComentario;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUComentario::testeSucesso() {
	try {
		nomeAutor->setNome(AUTOR_VALIDO);
		textoComentario->setTexto(COMENTARIO_VALIDO);
		comentario->setAutor(*nomeAutor);
		comentario->setComentario(*textoComentario);

		if (comentario->getAutor().getNome().compare(AUTOR_VALIDO) != 0) {
			estado = FALHA;
		}
		else if (comentario->getComentario().getTexto().compare(COMENTARIO_VALIDO) != 0) {
			estado = FALHA;
		}
	}
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

///O metodo run ira rodar todo o teste de unidade
int TUComentario::run() {
	setUp();
	testeSucesso();
	tearDown();

	return estado;
}