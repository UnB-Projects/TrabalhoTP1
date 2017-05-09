#ifndef _USUARIO_H_INCLUDED
#define _USUARIO_H_INCLUDED

#include "Nome.h"
#include "Email.h"
#include "Senha.h"

/**
*Classe que define os Usuarios do trabalho, atributos e métodos foram simplificados para atender as exigências da lista 1.
*/

class Usuario {

private:
	Nome nome;
	Email email;
	Senha senha;

public:
	void setNome(const Nome&);
	void setEmail(const Email&);
	void setSenha(const Senha&);

	Nome getNome() const;
	Email getEmail() const;
	Senha getSenha() const;
};

inline void Usuario::setNome(const Nome &nome) {
	this->nome = nome;
}

inline void Usuario::setEmail(const Email &email) {
	this->email = email;
}

inline void Usuario::setSenha(const Senha &senha) {
	this->senha = senha;
}

inline Nome Usuario::getNome() const {
	return this->nome;
}

inline Email Usuario::getEmail() const {
	return this->email;
}

inline Senha Usuario::getSenha() const {
	return this->senha;
}

#endif