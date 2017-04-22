#ifndef _BLOG_H_INCLUDED
#define _BLOG_H_INCLUDED

#include <vector>
#include "Usuario.h"
#include "Nome.h"
#include "Postagem.h"

class Blog {

private:
	Usuario autor;
	Nome nome;
	vector<Postagem> postagem;

public:
	void setAutor (const Usuario&);
	void setNome(const Nome&);
	void setPostagens(const vector<Postagem>&);

	Usuario getAutor() const;
	Nome getNome() const;
	vector<Postagem> getPostagens() const;
};

inline void Blog::setAutor(const Usuario &autor) {
	this->autor = autor;
}

inline void Blog::setNome(const Nome &nome) {
	this->nome = nome;
}

inline void Blog::setPostagens(const vector<Postagem> &postagem) {
	this->postagem = postagem;
}

inline Usuario Blog::getAutor() const {
	return this->autor;
}

inline Nome Blog::getNome() const {
	return this->nome;
}

inline vector<Postagem> Blog::getPostagens() const {
	return this->postagem;
}

#endif