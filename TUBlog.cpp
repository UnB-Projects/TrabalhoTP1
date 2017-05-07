#include "TUBlog.h"

const string TUBlog::NOME_VALIDO = "Blog de Programacao";
const string TUBlog::AUTOR_VALIDO = "Igor Figueira";
const string TUBlog::POSTAGEM_VALIDA = "C++ eh uma linguagem de programacao interessante";
const int TUBlog::SUCESSO;
const int TUBlog::FALHA;

//Alocacao dinamica para os objetos que serao tratados pelo teste
void TUBlog::setUp() {
	blog = new Blog();
	nomeBlog = new Nome();
	nomeAutor = new Nome();
	textoPostagem = new Texto();

	estado = SUCESSO;
}

//Liberacao de memoria referente aos objetos alocados dinamicamente
void TUBlog::tearDown() {
	delete blog;
	delete nomeBlog;
	delete nomeAutor;
	delete textoPostagem;
}

//Teste de sucesso verifica se as excecoes nao capturam valores validos
void TUBlog::testeSucesso() {
	try {
		nomeBlog->setNome(NOME_VALIDO);
		nomeAutor->setNome(AUTOR_VALIDO);
		textoPostagem->setTexto(POSTAGEM_VALIDA);
		blog->setNome(*nomeBlog);
		blog->setAutor(*nomeAutor);
		blog->setPostagem(*textoPostagem);

		if (blog->getNome().getNome().compare(NOME_VALIDO) != 0) {
			estado = FALHA;
		}
		else if (blog->getAutor().getNome().compare(AUTOR_VALIDO) != 0) {
			estado = FALHA;
		}
		else if (blog->getPostagem().getTexto().compare(POSTAGEM_VALIDA) != 0) {
			estado = FALHA;
		}
	}
	catch(invalid_argument &ex) {
		estado = FALHA;
	}
}

//O metodo run ira rodar todo o teste de unidade
int TUBlog::run() {
	setUp();
	testeSucesso();
	tearDown();

	return estado;
}