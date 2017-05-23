#if defined(_WIN32)
	#define CLEAR system("cls");						
#else
	#define CLEAR system("clear");
#endif

#include <iostream>
#include "Stubs.h"
#include "IUAutenticacao.h"
#include "Resultados.h"

using namespace std;

int main () {
	IUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

    cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
    cout << "Email invalido = " << "teste@com" << endl;
    cout << "Senha invalida = " << "123456" << endl;
    cout << "Trigger de falha = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
    cout << "Trigger de erro de sistema  = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;

    ResultadoAutenticacao resultado;

    while(true){
        // Simula a tela de apreesntacao (tela inicial) de sistema.

        cout << endl << "Tela de apresentacao de sistema." << endl;

        try{

            // Ilustra soliciatacao de serviço de autenticação.

            resultado = cntrIUAutenticacao->autenticar();
        }
        catch(const runtime_error &exp){
                 cout << "Erro de sistema." << endl;
        }

        // Critica o resultado da autenticação.

        if(resultado.getValor() == ResultadoAutenticacao::SUCESSO) {
            break;
        }
    }

    // Acessa matrícula retornada da autenticação.

    Email email = resultado.getEmail();
}