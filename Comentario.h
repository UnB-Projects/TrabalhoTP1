#ifndef _COMENTARIO_H_INCLUDED
#define _COMENTARIO_H_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Comentario {

private:
	string comentario;
	const static int LIMITE_CARACTERES = 50;

	void validar (string) throw (invalid_argument);

public:
	void setComentario(string) throw (invalid_argument);
	string getComentario() const;
};

inline string Comentario::getComentario() const {
	return this->comentario;
}

#endif