#include "Email.h"

///Email soh sera setado se estiver no formato L\@L.L, onde L sao letras
void Email::setEmail(string email) throw (invalid_argument) {
	valida(email);
	this->email = email;
}

void Email::valida(string email) throw (invalid_argument) {
	int i = 0;
	string usuario, provedor, extensao;
	string verifica;
	
	//Condicao que verifica se o email nao comeca com '@' ou '.'
	if (verifica[0] == '@' || verifica[0] == '.') {
		throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");
	}

	while (i < email.size()) {

		//Condicao que verifica se '@' vem seguido de um '.' sem letras no meio
		if (email[i] == '@') {
			if (i == email.size() || email[i+1] == '.') {
				throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");
			}

			//'@' eh adicionado em uma string para checar posteriormente a ordem do '@' e do '.'
			verifica.push_back('@');
		}

		//Caso o caractere a ser verificado no loop seja um '.' ele entrara na string de verificacao
		else if (email[i] == '.') {
			verifica.push_back('.');
		}

		//Caso o caractere nao seja '@' ou '.' eh verificado se o caractere se trata de uma letra
		else if ((email[i] < 'A' || email[i] > 'Z') && (email[i] < 'a' || email[i] > 'z')) {

			//Caso nao seja uma letra, lanca-se uma excecao
			throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");	
		}

		i++;
	}

	//Finalmente checamos se a string verificadora eh igual a "@.".
	//Caso nao seja, significa que '@' e '.' estao fora de ordem, ou existe mais de um deles no email
	if (verifica.compare("@.") != 0) {
		throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");
	}
}