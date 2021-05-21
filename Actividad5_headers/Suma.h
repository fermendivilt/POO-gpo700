// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 20 de mayo del 2021

#include "Operacion.h"

class Suma : public Operacion{
    public:
        void operar();
};
void Suma::operar(){
    resultado = valor1 + valor2;
}