#include <iostream>
#include <string>
#include "Nome.h"
#include "Email.h"

using namespace std;

void mudaNome(string);

int main () {
	bool flag;
	string teste;
	Nome usuario, provedor, extensao;
	Email email;

	flag = false;
	while (flag == false) {
		try {	
			cin >> teste;
			email.setEmail(teste);
			flag = true;
		}
		catch(invalid_argument &ex) {
			cout << ex.what() << endl;
		}
	}

	cout << email.getEmail() << endl;
}

/*Nome leNome() {
	bool flag;
	string nome

	flag = false;
	while (flag == false) {
		try {
			cout << "Digite um nome: "
			cin >> nome;
			nome.setNome(nome);
			flag = true;
		}
		catch (invalid_argument &ex) {
			cout << ex.what() << endl;
		}
	}
}*/