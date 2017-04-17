#include "Nome.h"

const int Nome::LIMITE;

void Nome::setNome(string nome) throw (invalid_argument) {
	valida(nome);
	this->nome = nome;
}

void Nome::valida(string nome) throw (invalid_argument) {
	int i;

	if (nome.size() > LIMITE) {
		throw invalid_argument("O nome nao pode ter mais que 20 caracteres\n");
	}

	for (i = 0; i < nome.size(); i++) {
		if (nome[i] != ' ' && (nome[i] < 'A' || nome[i] > 'Z') && (nome[i] < 'a' || nome[i] > 'z')) {
			throw invalid_argument("Apenas espaco e caracteres A-Z minusculo/maiusculo sao aceitos");
		}
	}
}