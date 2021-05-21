// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 20 de mayo del 2021
#include <iostream>
#include <string>
using namespace std;

#include "Suma.h"
#include "Resta.h"
#include "Multiplica.h"

int main(){
    Suma suma; 
    Resta resta; 
    Multiplica multiplicacion;
    cout << "------- Suma -------" << endl;
    suma.set_val1(); suma.set_val2(); suma.operar(); suma.mostrarResultado();

    cout << "------- Resta -------" << endl;
    resta.set_val1(); resta.set_val2(); resta.operar(); resta.mostrarResultado();

    cout << "------- Multiplicacion -------" << endl;
    multiplicacion.set_val1(); multiplicacion.set_val2(); multiplicacion.operar(); multiplicacion.mostrarResultado();

    return 0;
}