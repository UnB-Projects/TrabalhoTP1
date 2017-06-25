#include "Controladoras.h"

ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error) {

	ResultadoAutenticacao resultado;
	Email email;
	Senha senha;
	string entrada;

	// Solicitar matricula e senha.

	while(true) {

		cout << endl << "Autenticacao de usuario." << endl << endl;

		try {
			cout << "Digite o Email: ";
			cin >> entrada;
			email.setEmail(entrada);
			cout << "Digite a senha: ";
			cin >> entrada;
			senha.setSenha(entrada);
			break;
		}
		catch (const invalid_argument &exp) {               // catch por referÃªncia.
			cout << endl << "Dado em formato incorreto." << endl;
		}
	}

	// Solicitar autenticaÃ§Ã£o.

	resultado = cntrLNAutenticacao->autenticar(email, senha);

	// Informar resultado da autenticaÃ§Ã£o.

	if(resultado.getValor() == ResultadoAutenticacao::FALHA)
	cout << endl << "Falha na autenticacao." << endl;

	return resultado;
}


void CntrIUBlog::executar(const Email &email) throw(runtime_error){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as opções.

        cout << endl << "Gerenciamento de blog." << endl << endl;

        cout << "Criar  - " << CRIAR << endl;
        cout << "Excluir  - " << EXCLUIR << endl;
        cout << "Editar   - " << EDITAR << endl;
        cout << "Pesquiar - " << PESQUISAR << endl;
        cout << "Voltar - " << VOLTAR << endl << endl;
        cout << "Selecione uma opcao :";

        cin >> opcao;

        switch(opcao){
            case CRIAR:   criar();
                            break;
            case EXCLUIR:   excluir();
                            break;
            case EDITAR:    editar();
                            break;
            case PESQUISAR: pesquisar();
                            break;
        }

        if(opcao == VOLTAR)
            break;
    }

    return;
}

void CntrIUBlog::criar() throw(runtime_error){

    //Blog blog;

    // Solicitar dados do projeto a ser incluído.
    // ........
    // ........
    // Solicitar serviço.

    /*
	ResultadoBlog resultado;
	resultado = cntrLNAutenticacao->autenticar(email, senha);
   	resultado = cntrLNBlog->criar(blog);*/
   	
    // Processar resultado.
}

void CntrIUBlog::excluir() throw(runtime_error){

    //Codigo codigo;

    // Solicitar código do projeto a ser removido.
    // ........
    // ........
    // Solicitar serviço.

    //ResultadoBlog resultado;
    //resultado = cntrLNBlog->remover(blog);

    // Processar resultado.

}

void CntrIUBlog::pesquisar() throw(runtime_error){

    //Codigo codigo;

    // Solicitar código do projeto a ser pesquisado.
    // ........
    // ........
    // Solicitar serviço.

    //ResultadoProjeto resultado;
    //resultado = cntrLNBlog->pesquisar(codigo);

    // Processar resultado.

}

void CntrIUBlog::editar() throw(runtime_error){

    //Blog blog;

    // Solicitar dados do projeto a ser editado.
    // ........
    // ........
    // Solicitar serviço.

    //ResultadoBlog resultado;
    //resultado = cntrLNBlog->editar(blog);

    // Processar resultado.

}
