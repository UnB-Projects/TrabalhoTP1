#ifndef NOME_H_
#define NOME_H_

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Nome {

private:
	string nome;
	void valida(string) throw (invalid_argument);

public:
	void setNome(string) throw (invalid_argument);
	string getNome();
};

#endif