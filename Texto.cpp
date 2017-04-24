#include "Texto.h"

const int Texto::LIMITE_CARACTERES;

void Texto::setTexto(string texto) throw (invalid_argument) {
	validar(texto);
	this->texto = texto;
}

void Texto::validar (string texto) throw (invalid_argument) {
	if (texto.size() > LIMITE_CARACTERES) {
		throw invalid_argument("Seu texto ultrapassou o limite de 50 caracteres\n");
	}
}