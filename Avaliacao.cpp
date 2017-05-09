#include "Avaliacao.h"

const int Avaliacao::AVALIACAO_MINIMA;
const int Avaliacao::AVALIACAO_MAXIMA;

///Avaliacao soh sera setada caso esteja dentro do intervalo definido (1 a 5)
void Avaliacao::setAvaliacao(int avaliacao) throw (invalid_argument) {
	validar(avaliacao);
	this->avaliacao = avaliacao;
}

//Metodo que controla o intervalo de avialiacoes
void Avaliacao::validar(int avaliacao) throw (invalid_argument) {
	if (avaliacao < AVALIACAO_MINIMA || avaliacao > AVALIACAO_MAXIMA) {
		throw invalid_argument("A avaliacao deve ser 1, 2, 3, 4 ou 5\n");
	}
} 
