#ifndef CODIGO_H_INCLUDED
#define CODIGO_H_INCLUDED

#include <stdexcept>
using namespace std;

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // Ilustra m�todo de valida��o.

        void validar(int) throw (invalid_argument);

public:
        void setCodigo(int) throw (invalid_argument);

        // Ilustra m�todo inline.

        int getCodigo(){
            return codigo;
        }
};





#endif
