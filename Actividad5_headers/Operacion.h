// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 20 de mayo del 2021
#ifndef Operacion_h
#define Operacion_h

class Operacion {
    public:
        void set_val1();
        void set_val2();
        void mostrarResultado();
    protected:
        int valor1;
        int valor2;
        int resultado;
};
void Operacion::set_val1(){
    cout << "Ingrese el primer valor: ";
    cin >> valor1;
}
void Operacion::set_val2(){
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
}
void Operacion::mostrarResultado(){
    cout << "El resultado es: " << resultado << "\n";
}

#endif