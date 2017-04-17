#include "Comentario.h"

const int Comentario::LIMITE_CARACTERES;

void Comentario::setComentario(string comentario) throw (invalid_argument) {
	validar(comentario);
	this->comentario = comentario;
}

void Comentario::validar (string comentario) throw (invalid_argument) {
	if (comentario.size() > LIMITE_CARACTERES) {
		throw invalid_argument("Seu comentario ultrapassou o limite de 50 caracteres\n");
	}
}

