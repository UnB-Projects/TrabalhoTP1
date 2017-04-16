#include <iostream>
#include <stdexcept>
#include "Nome.h"

using namespace std;

//Nome::Nome(string nome) {
//	this->nome = nome;
//}

void Nome::setNome(string nome) throw (invalid_argument) {
	valida(nome);
	this->nome = nome;
}

string Nome::getNome() {
	return nome;
}

void Nome::valida(string nome) throw (invalid_argument) {
	int i;

	if (nome.size() > 20) {
		throw invalid_argument("O nome nao pode ter mais que 20 caracteres\n");
	}

	for (i = 0; i < nome.size(); i++) {
		if (nome[i] != ' ' && (nome[i] < 'A' || nome[i] > 'Z') && (nome[i] < 'a' || nome[i] > 'z')) {
			throw invalid_argument("Apenas espaco e caracteres A-Z minusculo/maiusculo sao aceitos");
		}
	}
}