//Fernando de Jesús Mendivil Terminel - A00232280
//TC1030 grupo 700
//13 de mayo del 2021

#include <iostream>
#include <string>
using namespace std;

class Vendedor{
    public:
        Vendedor(); // constructor por defecto
        Vendedor(string clave, string nombre);
        string getVend() {return Cve_Vendedor;};
        string getNombre() {return Nombre;};
    private:
        string Cve_Vendedor;
        string Nombre;
};
Vendedor::Vendedor() {
    Cve_Vendedor = "Vacante";
    Nombre = "Nadie";
};
Vendedor::Vendedor(string clave, string nombre){
    Cve_Vendedor = clave;
    Nombre = nombre;
};

class Inventario{
    public:
        Inventario();
        Inventario(string clave, string desc, double precio);
        string getClave(){return Cve_Articulo;};
        string getDesc(){return Descripcion;};
        double getPrecio(){return Precio;};
    private:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
};
Inventario::Inventario(){
    Cve_Articulo = "Ninguno";
    Descripcion = "Nohay";
    Precio = 0.0;
};
Inventario::Inventario(string clave, string desc, double precio){
    Cve_Articulo = clave;
    Descripcion = desc;
    Precio = precio;
};

class Cliente{
    public:
        Cliente();
        Cliente(string cliente, string nombre);
        string getClave(){return Cve_Cliente;};
        string getNombre(){return Nombre;};
    private:
        string Cve_Cliente;
        string Nombre;
};
Cliente::Cliente(){
    Cve_Cliente = "Ninguno";
    Nombre = "Nadie";
};
Cliente::Cliente(string cliente, string nombre){
    Cve_Cliente = cliente;
    Nombre = nombre;
};


int main(){
    Vendedor v1;
    Vendedor v2("a78","Mi cuate rodrigo");

    Inventario i1;
    Inventario i2("u01", "Toercas", 3.00);

    Cliente c1;
    Cliente c2("c007","Bond");

    cout<<v1.getVend()<<" - "<<v1.getNombre()<<"\n";
    cout<<v2.getVend()<<" - "<<v2.getNombre()<<"\n\n";

    cout<<i1.getClave()<<" - "<<i1.getDesc()<<" - "<<i1.getPrecio()<<"\n";
    cout<<i2.getClave()<<" - "<<i2.getDesc()<<" - "<<i2.getPrecio()<<"\n\n";

    cout<<c1.getClave()<<" - "<<c1.getNombre()<<"\n";
    cout<<c2.getClave()<<" - "<<c2.getNombre();

    return 0;
}