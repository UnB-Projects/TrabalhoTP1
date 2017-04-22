#ifndef _COMENTARIO_H_INCLUDED
#define _COMENTARIO_H_INCLUDED

#include "Texto.h"
#include "Usuario.h"

class Comentario {

private:
	Texto comentario;
	Usuario autor;

public:
	void setComentario (const Texto&);
	void setAutor (const Usuario&);

	Texto getComentario() const;
	Usuario getAutor() const;
};

inline void Comentario::setComentario (const Texto &comentario) {
	this->comentario = comentario;
}

inline void Comentario::setAutor (const Usuario &autor) {
	this->autor = autor;
}

inline Texto Comentario::getComentario() const {
	return this->comentario;
}

inline Usuario Comentario::getAutor() const {
	return this->autor;
}

#endif