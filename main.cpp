#include <iostream>
#include <string>
#include <cstdio>
#include "Nome.h"
#include "Email.h"
#include "Senha.h"
#include "Avaliacao.h"
#include "Texto.h"
#include "Usuario.h"
#include "Comentario.h"
#include "Blog.h"

using namespace std;

void mudaNome(string);

int main () {
	bool flag;
	string testeString;
	int testeInt;
	Nome nome;
	Email email;
	Senha senha;
	Avaliacao avaliacao;
	Texto texto;
	vector<Comentario> vetor;
/*
	flag = false;
	while (flag == false) {
		try {
			cout << "Insira seu nome: ";	
			getline(cin, testeString);
			nome.setNome(testeString);
			flag = true;
		}
		catch(invalid_argument &ex) {
			cout << ex.what() << endl;
		}
	}

	cout << nome.getNome() << endl;

	flag = false;
	while (flag == false) {
		try {
			cout << "Insira seu e-mail: ";	
			getline(cin, testeString);
			email.setEmail(testeString);
			flag = true;
		}
		catch(invalid_argument &ex) {
			cout << ex.what() << endl;
		}
	}

	cout << email.getEmail() << endl;

	flag = false;
	while (flag == false) {
		try {
			cout << "Insira sua senha: ";	
			getline(cin, testeString);
			senha.setSenha(testeString);
			flag = true;
		}
		catch(invalid_argument &ex) {
			cout << ex.what() << endl;
		}
	}

	cout << senha.getSenha() << endl;*/

	flag = false;
	while (flag == false) {
		try {
			cout << "Insira sua avaliacao: ";	
			cin >> testeInt;
			avaliacao.setAvaliacao(testeInt);
			flag = true;
		}
		catch(invalid_argument &ex) {
			cout << ex.what() << endl;
		}
	}

	cout << avaliacao.getAvaliacao() << endl;

	flag = 	false;
	while (flag == false) {
		try {
			getchar();
			cout << "Insira seu texto: ";	
			getline(cin, testeString);
			texto.setTexto(testeString);
			flag = true;
		}
		catch(invalid_argument &ex) {
			cout << ex.what() << endl;
		}
	}

	cout << texto.getTexto() << endl;

	Comentario comentario;

	comentario.setComentario(texto);
	cout << "Comentario: " << comentario.getComentario().getTexto() << endl;
	cout << "Endereco comentario: " << &texto << endl;

	Postagem postagem;

	postagem.setComentario(comentario);
	vetor = postagem.getComentarios();
	cout << "Vetor: " << vetor[0].getComentario().getTexto() << endl;
	cout << "Endereco vetor: " << &vetor[0] << endl;

}