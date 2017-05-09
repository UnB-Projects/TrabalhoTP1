#ifndef _POSTAGEM_H_INCLUDED
#define _POSTAGEM_H_INCLUDED

#include <string>
#include "Texto.h"
#include "Avaliacao.h"

/**
*Classe que define as Postagens do trabalho, atributos e métodos foram simplificados para atender as exigências da lista 1.
*/

class Postagem {

private:
	Texto postagem;
	Avaliacao avaliacao;

public:
	void setPostagem (const Texto&);
	void setAvaliacao(const Avaliacao&);

	Texto getPostagem() const;
	Avaliacao getAvaliacao() const;
};

inline void Postagem::setPostagem(const Texto &postagem) {
	this->postagem = postagem;
}

inline void Postagem::setAvaliacao(const Avaliacao &avaliacao) {
	this->avaliacao = avaliacao;
}

inline Texto Postagem::getPostagem() const {
	return this->postagem;
}

inline Avaliacao Postagem::getAvaliacao() const {
	return this->avaliacao;
}


#endif