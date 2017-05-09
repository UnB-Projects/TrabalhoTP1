#ifndef SENHA_H_INCLUDED
#define SENHA_H_INCLUDED

#include <string>
#include <stdexcept>
#include <algorithm>

using namespace std;

/**
*Classe que gerencia as Senhas dos Usuarios do Blog 
*/

class Senha {

private:	
	const static int TAMANHO_SENHA = 5;
	string senha;

	void validar(string) throw (invalid_argument);

public:
	void setSenha(string) throw (invalid_argument);
	string getSenha() const;
};

inline string Senha::getSenha() const {
	return this->senha;
}

#endif