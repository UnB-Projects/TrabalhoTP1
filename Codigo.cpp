#include "Codigo.h"

const int Codigo::LIMITE;

// Definições de métodos da classe Codigo.

// Ilustra uso de um método privado para validação.

void Codigo::validar(int codigo) throw (invalid_argument){

    // Lança exceção se valor for menor que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

// Ilustra método que nao trata exceção lançada.

void Codigo::setCodigo(int codigo) throw (invalid_argument){
    validar(codigo);
    this->codigo = codigo;
}
