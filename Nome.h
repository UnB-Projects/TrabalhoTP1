#ifndef NOME_H_INCLUDED
#define NOME_H_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

/**
*Classe que gerencia os Nomes dos Usuarios do e dos Blogs
*/
class Nome {

private:
	const static int LIMITE = 20;
	string nome;

	void valida(string) throw (invalid_argument);

public:
	void setNome(string) throw (invalid_argument);
	string getNome() const;
};

inline string Nome::getNome() const {
	return nome;
}

#endif