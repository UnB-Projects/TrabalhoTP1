#include "Email.h"

void Email::setEmail(string email) throw (invalid_argument) {
	valida(email);
	this->email = email;
}

string Email::getEmail() {
	return this->email;
}

void Email::valida(string email) throw (invalid_argument) {
	int i = 0;
	string usuario, provedor, extensao;
	string verifica;
	
	while (i < email.size()) {
		if (email[i] == '@') {
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