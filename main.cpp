#if defined(_WIN32)
	#define CLEAR system("cls");						
#else
	#define CLEAR system("clear");
#endif

#include <iostream>
#include "Controladoras.h"
#include "Stubs.h"
#include "Interfaces.h"
#include "Resultados.h" // pra poder instanciar um tipo IUAunteticacao
#include "Blog.h"
using namespace std;

int main () {
	
	// Ligacao entre controladora de interacao e stub de negocio
	// Instancia as controladoras
	IUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();

	// Liga (link) instancia da controladora de interacao a instancia do stub de negocio.
    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

	// valores invalidos
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

    // Acessa matricula retornada da autenticacao

    Email email = resultado.getEmail();
    
    // ----------------------------------------------------------
    
    // Cria referencia para  a controladora de interface com o usuario responsavel por servicos do blog, apos estar logado
    
    IUBlog *cntrIUBlog = new CntrIUBlog();
    //ILNBlog *sutbLNBlog = new StubBlog();
    
    
    
}




