#include "TUNome.h"

vector<string> TUNome::NOMES_VALIDOS;
vector<string> TUNome::NOMES_INVALIDOS;

const int TUNome::SUCESSO;
const int TUNome::FALHA;

void TUNome::setUp() {
	nome = new Nome();
	estado = SUCESSO;

	NOMES_VALIDOS.push_back("Igor");
	NOMES_VALIDOS.push_back("Igor Figueira");
	NOMES_VALIDOS.push_back("Gabriel");
	NOMES_VALIDOS.push_back("Gabriel Mourao");
	NOMES_VALIDOS.push_back("Fernando Albuquerque");

	NOMES_INVALIDOS.push_back("Mais de vinte caracteres");
	NOMES_INVALIDOS.push_back("Igor_Figueira");
	NOMES_INVALIDOS.push_back("G4bri3l");
	NOMES_INVALIDOS.push_back("12345");
	NOMES_INVALIDOS.push_back(".!@$()");
}

void TUNome::tearDown() {
	delete nome;
}

void TUNome::testeSucesso() {
	int i;

	for (i = 0; i < NOMES_VALIDOS.size(); i++) {
		try {
			nome->setNome(NOMES_VALIDOS[i]);
			if (nome->getNome().compare(NOMES_VALIDOS[i]) != 0) {
				estado = FALHA;
			}
		}
		catch(invalid_argument &ex) {
			estado = FALHA;
		}
	}
}

void TUNome::testeFalha() {
	int i;

	for (i = 0; i < NOMES_INVALIDOS.size(); i++) {
		try {
			nome->setNome(NOMES_INVALIDOS[i]);
			estado = FALHA;
		}
		catch(invalid_argument &ex) {}
	}
}

int TUNome::run() {
	setUp();
	testeSucesso();
	testeFalha();
	tearDown();

	return estado;
}