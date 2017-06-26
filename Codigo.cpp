#include "Codigo.h"

const int Codigo::LIMITE;

// Defini��es de m�todos da classe Codigo.

// Ilustra uso de um m�todo privado para valida��o.

void Codigo::validar(int codigo) throw (invalid_argument){

    // Lan�a exce��o se valor for menor que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

// Ilustra m�todo que nao trata exce��o lan�ada.

void Codigo::setCodigo(int codigo) throw (invalid_argument){
    validar(codigo);
    this->codigo = codigo;
}
