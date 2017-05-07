#ifndef _AVALIACAO_H_INCLUDED
#define _AVALIACAO_H_INCLUDED

#include <stdexcept>

using namespace std;

//Classe que gerencia as avaliacoes do blog

class Avaliacao {

private:
	int avaliacao;

	//Definicao do intervalo de avaliacao

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