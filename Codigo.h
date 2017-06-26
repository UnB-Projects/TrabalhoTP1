#ifndef CODIGO_H_INCLUDED
#define CODIGO_H_INCLUDED

#include <stdexcept>
using namespace std;

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // Ilustra método de validação.

        void validar(int) throw (invalid_argument);

public:
        void setCodigo(int) throw (invalid_argument);

        // Ilustra método inline.

        int getCodigo(){
            return codigo;
        }
};





#endif
