#ifndef _POSTAGEM_H_INCLUDED
#define _POSTAGEM_H_INCLUDED

#include <string>
#include "Texto.h"
#include "Avaliacao.h"

class Postagem {

private:
	//Atributos foram simplificados para atender somente as exigencias da lista 1,
	//que nao preve relacionamento entre entidades ainda
	Texto postagem;
	Avaliacao avaliacao;

public:
	//Metodos tambem foram simplificados, consequentemente
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