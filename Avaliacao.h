#ifndef _AVALIACAO_H_INCLUDED
#define _AVALIACAO_H_INCLUDED

#include <stdexcept>

using namespace std;

class Avaliacao {
private:
	int avaliacao;
	const static int AVALIACAO_MINIMA = 1;
	const static int AVALIACAO_MAXIMA = 5;

	void validar(int) throw (invalid_argument);

public:
	void setAvaliacao(int) throw (invalid_argument);
	int getAvaliacao() const; 
};

inline int Avaliacao::getAvaliacao() const {
	return this->avaliacao;
}

#endif