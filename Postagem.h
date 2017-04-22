#ifndef _POSTAGEM_H_INCLUDED
#define _POSTAGEM_H_INCLUDED

#include <vector>
#include <stdexcept>
#include <string>
#include "Usuario.h"
#include "Texto.h"
#include "Comentario.h"
#include "Avaliacao.h"

class Postagem {

private:
	const static int LIMITE_COMENTARIOS = 5;
	const static int LIMITE_AVALIACOES = 1;

	Texto postagem;
	vector<Comentario> comentario;
	vector<Avaliacao> avaliacao;

	void calculaMediaAvaliacoes();
	void verificaLimiteComentarios(const &Comentario) throw (invalid_argument);

public:
	void setPostagem (const Texto&);
	void setComentario (const Comentario&) throw(invalid_argument);
	void setAvaliacao(const Avaliacao&);
	
	double getMediaAvaliacoes() const;
	Texto getPostagem() const;
	vector<Comentario> getComentarios() const;
};

inline void Postagem::setPostagem(const Texto &postagem) {
	this->postagem = postagem;
}

inline Texto Postagem::getPostagem() const {
	return this->postagem;
}

inline vector<Comentario> Postagem::getComentarios() const {
	return this->comentario;
}


#endif