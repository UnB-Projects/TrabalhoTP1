#include "Senha.h"

const int Senha::TAMANHO_SENHA;

void Senha::setSenha(string senha) throw (invalid_argument) {
	validar (senha);
	this->senha = senha;
}

void Senha::validar(string senha) throw (invalid_argument) {
	int i;

	//Primeiro eh verificado se a senha difere do tamanho estabelecido no roteiro do trabalho
	if (senha.size() != TAMANHO_SENHA) {
		throw invalid_argument("A senha deve conter 5 caracteres\n");
	}

	//A string eh ordenada para a verificacao de caracteres repetidos no loop seguinte
	sort(senha.begin(), senha.end());

	//Caso um caractere seja igual a seu antecessor apos a ordenacao
	//existe um caractere repitido na senha
	for (i = 1; i < senha.size(); i++) {
		if (senha[i] == senha[i-1]) {
			throw invalid_argument("Nao podem haver caracteres repetidos\n");
		}
	}
}