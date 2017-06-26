#include "Stubs.h"


const string StubLNAutenticacao::TRIGGER_FALHA = "igorfgds@gmail.com";
const string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA = "gabriel@outlook.com";

ResultadoAutenticacao StubLNAutenticacao::autenticar(const Email &email, const Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Email: " << email.getEmail() << endl ;
    cout << "Senha: " << senha.getSenha() << endl ;

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor da matrÃ­cula.
    if (email.getEmail().compare(TRIGGER_FALHA) == 0) {
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    else if (email.getEmail().compare(TRIGGER_ERRO_SISTEMA) == 0) {
        throw runtime_error("Erro de sistema");
    }
    else {
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setEmail(email);
    }
    /*switch(email.getEmail()){
        case TRIGGER_FALHA:
            resultado.setValor(ResultadoAutenticacao::FALHA);
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
        default:
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
            resultado.setEmail(email);
        }*/

    return resultado;
}


// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub da controladora da lógica de negócio de Blog.

ResultadoBlog StubLNBlog::criar(const Blog &Blog) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNBlog::criar" << endl ;

    ResultadoBlog resultado;

    // Diferentes comportamentos dependendo do código do Blog.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

ResultadoBlog StubLNBlog::excluir(const Codigo &codigo) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNBlog::excluir" << endl ;

    ResultadoBlog resultado;

    // Diferentes comportamentos dependendo do código do Blog.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

ResultadoBlog StubLNBlog::pesquisar(const Codigo &codigo) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNBlog::pesquisar" << endl ;

    ResultadoBlog resultado;

    // Diferentes comportamentos dependendo do código do Blog.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

ResultadoBlog StubLNBlog::editar(const Blog &Blog) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNBlog::editar" << endl ;

    ResultadoBlog resultado;

    // Diferentes comportamentos dependendo do código do Blog.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}


