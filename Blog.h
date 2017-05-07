#ifndef _BLOG_H_INCLUDED
#define _BLOG_H_INCLUDED

#include "Nome.h"
#include "Texto.h"

class Blog {

private:
	//Atributos foram simplificados para atender somente as exigencias da lista 1,
	//que nao preve relacionamento entre entidades ainda
	Nome autor;
	Nome nome;
	Texto postagem;

public:
	//Metodos tambem foram simplificados, consequentemente
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