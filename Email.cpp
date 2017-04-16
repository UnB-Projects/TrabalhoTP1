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
	Nome nomeUsuario, nomeProvedor, nomeExtensao;

	while (i < email.size()) {
		if (email[i] == '@') {
			verifica.push_back('@');
		}
		else if (email[i] == '.') {
			verifica.push_back('.');
		}
		i++;
	}

	if (verifica.compare("@.") != 0) {
		throw invalid_argument ("O email deve ser no formato L@L.L, onde L sao letras.");
	}

	i = 0;

	while (email[i] != '@') {
		usuario.push_back(email[i]);
		i++;
	}

	nomeUsuario.setNome(usuario);

	i++;
	while (email[i] != '.') {
		provedor.push_back(email[i]);
		i++;
	}

	nomeProvedor.setNome(provedor);

	i++;
	while (i < email.size()) {
		extensao.push_back(email[i]);
		i++;
	}

	nomeExtensao.setNome(extensao);
}