#include "Email.h"

void Email::setEmail(string email) throw (invalid_argument) {
	valida(email);
	this->email = email;
}

void Email::valida(string email) throw (invalid_argument) {
	int i = 0;
	string usuario, provedor, extensao;
	string verifica;
	
	if (verifica[0] == '@' || verifica[0] == '.') {
		throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");
	}

	while (i < email.size()) {
		if (email[i] == '@') {
			if (i == email.size() || email[i+1] == '.') {
				throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");
			}

			verifica.push_back('@');
		}
		else if (email[i] == '.') {
			verifica.push_back('.');
		}

		else if ((email[i] < 'A' || email[i] > 'Z') && (email[i] < 'a' || email[i] > 'z')) {
			throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");	
		}

		i++;
	}

	if (verifica.compare("@.") != 0) {
		throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");
	}
}