#ifndef _COMENTARIO_H_INCLUDED
#define _COMENTARIO_H_INCLUDED

#include "Texto.h"
#include "Nome.h"

class Comentario {

private:
	//Atributos foram simplificados para atender somente as exigencias da lista 1,
	//que nao preve relacionamento entre entidades ainda
	Texto comentario;
	Nome autor;

public:
	//Metodos tambem foram simplificados, consequentemente
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