#include <iostream>
#include "TUNome.h"
#include "TUSenha.h"
#include "TUEmail.h"
#include "TUAvaliacao.h"
#include "TUTexto.h"
#include "TUBlog.h"
#include "TUComentario.h"
#include "TUPostagem.h"
#include "TUUsuario.h"

using namespace std;

int main () {
	//Instanciados todos os objetos de teste de unidade
	TUNome testeNome;
	TUSenha testeSenha;
	TUEmail testeEmail;
	TUAvaliacao testeAvaliacao;
	TUTexto testeTexto;
	TUBlog testeBlog;
	TUComentario testeComentario;
	TUPostagem testePostagem;
	TUUsuario testeUsuario;
	
	int sucesso;

	//TESTE DE UNIDADE NOME
	sucesso = testeNome.run();

	cout << "Teste Nome: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	//TESTE DE UNIDADE SENHA
	sucesso = testeSenha.run();

	cout << "Teste Senha: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	//TESTE DE UNIDADE EMAIL
	sucesso = testeEmail.run();

	cout << "Teste Email: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	//TESTE DE UNIDADE AVALIACAO
	sucesso = testeAvaliacao.run();

	cout << "Teste Avaliacao: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	//TESTE DE UNIDADE TEXTO
	sucesso = testeTexto.run();

	cout << "Teste Texto: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	//TESTE DE UNIDADE BLOG	
	sucesso = testeBlog.run();

	cout << "Teste Blog: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	//TESTE DE UNIDADE COMENTARIO	
	sucesso = testeComentario.run();

	cout << "Teste Comentario: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}	

	//TESTE DE UNIDADE POSTAGEM
	sucesso = testePostagem.run();

	cout << "Teste Postagem: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	//TESTE DE UNIDADE USUARIO
	sucesso = testeUsuario.run();

	cout << "Teste Usuario: ";

	if (sucesso) {
		cout << "Sucesso" << endl;
	}
	else {
		cout << "Falha" << endl;
	}	
}