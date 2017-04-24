#include "Postagem.h"

const int Postagem::LIMITE_COMENTARIOS;
const int Postagem::LIMITE_AVALIACOES;

void Postagem::setComentario(const Comentario &comentario) {
	this->comentario.push_back(comentario);
}

void Postagem::setAvaliacao(const Avaliacao &avaliacao) {
	this->avaliacao.push_back(avaliacao);
}

double Postagem::getMediaAvaliacoes() const {
	int i;
	double tamanho;
	double total = 0;

	tamanho = this->avaliacao.size();

	for (i = 0;  i < tamanho; i++) {
		total += this->avaliacao[i].getAvaliacao();
	}

	return total / tamanho;
}
