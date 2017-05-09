#include "Nome.h"

const int Nome::LIMITE;

///O nome so sera setado se tiver menos de 20 caracteres e for composto por letras maiusculas ou minusculas
void Nome::setNome(string nome) throw (invalid_argument) {
	valida(nome);
	this->nome = nome;
}

void Nome::valida(string nome) throw (invalid_argument) {
	int i;

	/**
	*Neste caso verifica-se se o nome tem mais de 20 caracteres
	*/
	if (nome.size() > LIMITE) {
		throw invalid_argument("O nome nao pode ter mais que 20 caracteres\n");
	}

	/**
	*Posteriormente eh verificado se os caracteres digitados nao sao validos de acordo com as regras estabelecidas
	*/
	for (i = 0; i < nome.size(); i++) {
		if (nome[i] != ' ' && (nome[i] < 'A' || nome[i] > 'Z') && (nome[i] < 'a' || nome[i] > 'z')) {
			throw invalid_argument("Apenas espaco e caracteres A-Z minusculo/maiusculo sao aceitos");
		}
	}
}