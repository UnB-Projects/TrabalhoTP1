#ifndef _TEXTO_H_INCLUDED
#define _TEXTO_H_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

/**
*Classe que armazena os Textos das Postagens e dos Comentarios do Blog
*/

class Texto {

private:
	string texto;
	const static int LIMITE_CARACTERES = 50;

	void validar (string) throw (invalid_argument);

public:
	void setTexto(string) throw (invalid_argument);
	string getTexto() const;
};

inline string Texto::getTexto() const {
	return this->texto;
}

#endif