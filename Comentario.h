#ifndef _COMENTARIO_H_INCLUDED
#define _COMENTARIO_H_INCLUDED

#include "Texto.h"
#include "Nome.h"

/**
*Classe que define os Comentarios do trabalho, atributos e métodos foram simplificados para atender as exigências da lista 1.
*/

class Comentario {

private:
	Texto comentario;
	Nome autor;

public:
	void setComentario (const Texto&);
	void setAutor (const Nome&);

	Texto getComentario() const;
	Nome getAutor() const;
};

inline void Comentario::setComentario (const Texto &comentario) {
	this->comentario = comentario;
}

inline void Comentario::setAutor (const Nome &autor) {
	this->autor = autor;
}

inline Texto Comentario::getComentario() const {
	return this->comentario;
}

inline Nome Comentario::getAutor() const {
	return this->autor;
}

#endif