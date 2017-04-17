#include "Senha.h"

const int Senha::TAMANHO_SENHA;

void Senha::setSenha(string senha) throw (invalid_argument) {
	validar (senha);
	this->senha = senha;
}

void Senha::validar(string senha) throw (invalid_argument) {
	int i;

	if (senha.size() != TAMANHO_SENHA) {
		throw invalid_argument("A senha deve conter 5 caracteres\n");
	}

	sort(senha.begin(), senha.end());

	for (i = 1; i < senha.size(); i++) {
		if (senha[i] == senha[i-1]) {
			throw invalid_argument("Nao podem haver caracteres repetidos\n");
		}
	}
}