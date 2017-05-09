#ifndef _BLOG_H_INCLUDED
#define _BLOG_H_INCLUDED

#include "Nome.h"
#include "Texto.h"

/**
*Classe que define os Blogs do trabalho, atributos e métodos foram simplificados para atender as exigências da lista 1.
*/
class Blog {

private:
	Nome autor;
	Nome nome;
	Texto postagem;

public:
	void setAutor (const Nome&);
	void setNome(const Nome&);
	void setPostagem(const Texto&);

	Nome getAutor() const;
	Nome getNome() const;
	Texto getPostagem() const;
};

inline void Blog::setAutor(const Nome &autor) {
	this->autor = autor;
}

inline void Blog::setNome(const Nome &nome) {
	this->nome = nome;
}

inline void Blog::setPostagem(const Texto &postagem) {
	this->postagem = postagem;
}

inline Nome Blog::getAutor() const {
	return this->autor;
}

inline Nome Blog::getNome() const {
	return this->nome;
}

inline Texto Blog::getPostagem() const {
	return this->postagem;
}

#endif