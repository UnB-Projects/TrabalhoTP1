#include "Postagem.h"

const int Postagem::LIMITE_COMENTARIOS;
const int Postagem::LIMITE_AVALIACOES;

void Postagem::verificaLimiteComentarios(const Comentario &Comentario) throw (invalid_argument){
	int cnt = 0;
	
	
}

void Postagem::setComentario(const Comentario &comentario) throw (invalid_argument) {
	this->comentario.push_back(comentario);
}