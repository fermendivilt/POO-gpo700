/*
Randy Oliver Ortega Cota - A00232304
Fernando de Jesús Mendivil Terminel - A00232280
*/

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <vector>
using namespace std;

class Vendedor {
    public:
        string Cve_vendedor;
        string Nombre;
        void crear_lista (int numero, Vendedor arr[]){
            string clave, persona;
            for (int i=0; i<numero; i++){
                cout << "\nIngrese LA CLAVE del vendedor numero " << i+1 << " de " << numero << ": ";
                cin >> clave;
                cout << "\nIngrese EL NOMBRE del vendedor numero " << i+1 << " de " << numero << ": ";
                cin >> persona;
                arr[i].Cve_vendedor = clave;
                arr[i].Nombre = persona;
            }
        };
        void imprimir_lista (int numero, Vendedor arr[]){
            cout << "Lista de vendedores:\n";
            cout<< "Clave" << "\t\t" << "Nombre\n";
            for (int i=0; i<numero; i++){
                cout << arr[i].Cve_vendedor << "\t\t" << arr[i].Nombre << "\n";
            }
        };
};

class Inventario {
    public:
        string Cve_articulo;
        string Descripcion;
        double Precio;
        void GenerarArticulo(int num, Inventario arreInv[]){
            string clave,descrip;
            double prec;
            for (int i = 0; i < num; i++)
            {
                cout<<"\nIngrese la clave del articulo "<<i+1<<" de "<<num<<": ";
                cin>>clave;
                cout<<"\nIngrese la descripcion del articulo "<<i+1<<" de "<<num<<": ";
                cin>>descrip;
                cout<<"\nIngrese el precio del articulo "<<i+1<<" de "<<num<<": ";
                cin>>prec;         
                arreInv[i].Cve_articulo = clave;
                arreInv[i].Descripcion = descrip;
                arreInv[i].Precio = prec;      
            }
        };
        void ImprimirArticulos(int num, Inventario arreInv[]){
            cout<<"Lista de articulos"<<endl;
            cout<<"Clave"<<"\t\tDescripcion"<<"\t\tPrecio\n";
            for (int i = 0; i < num; i++)
            {
                cout<<arreInv[i].Cve_articulo<<"\t\t"<<arreInv[i].Descripcion<<"\t\t\t"<<arreInv[i].Precio<<endl;
            }
            
        };
};

class Factura {
    public:
        string No_Factura;
        string Cve_vendedor;
        string Cve_articulo;
        int Cantidad;
        int generarFactura(string momento, string cve_vend, string cve_art, int cant, int contador, Factura arrf[]){
            Factura f;
            f.Cve_vendedor = cve_vend;
            f.Cve_articulo = cve_art;
            f.Cantidad = cant;
            f.No_Factura = "F" + momento;
            arrf[contador] = f;
            contador++;
            return contador;
        }
        void imprimir_facts(int contador, Inventario arri[], Factura arrf[]){
            cout << "Facturas Generadas "<< endl;
            cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;
            string nombreArticulo;
            for (int j=0; j<=contador; j++){
                for (int k=0;k<sizeof(arri)/sizeof(arri[0]);k++){
                    if (arrf[j].Cve_articulo == arri[k].Cve_articulo)
                        nombreArticulo = arri[k].Descripcion;
                }
                cout<<arrf[j].No_Factura<<"\t"
                    <<arrf[j].Cve_vendedor<<"\t\t"
                    <<arrf[j].Cve_articulo<<"\t"
                    <<nombreArticulo<<endl;
            }
        }
};

string GETDATE(){
    char out[14];
    time_t t=time(NULL);
    strftime(out, sizeof(out), "%Y%m%d%H%S", localtime(&t));
    Sleep(2000);  // pauses for 10 seconds
    return out;
};

int main() {
    int n_empleados, size_inv, cantidad_articulos, cantidad_unidades;
    int opcion = 1;
    int contador = 0;
    string clave_vendedor, clave_articulo, este_momento;
    Vendedor arreglov[100];
    Inventario arregloi[100];
    Factura arreglof[100];

    cout << "Bienvenido a la terminal de facturas de (inserte nombre del lugar). \n";
    cout <<"Por favor, ingrese el numero de empleados: ";
    cin >> n_empleados;
    arreglov->crear_lista(n_empleados, arreglov);
    arreglov->imprimir_lista(n_empleados, arreglov);

    cout <<"Por favor, ingrese el numero de articulos: ";
    cin >> size_inv;
    arregloi->GenerarArticulo(size_inv,arregloi);
    arregloi->ImprimirArticulos(size_inv,arregloi);

    cout <<"Configuracion inicial terminada, ya puede hacer facturas :D.";

    while (opcion != 0){
        cout<<"¿Que desea hacer? Introduzca el numero de la opcion.\n";
        cout<<"1. Generar una factura\n2. Ver la lista de facturas\n";
        cout<<"3. Ver la lista de vendedores\n4. Ver la lista de productos\n";
        cout<<"0. Salir \n";
        cin>>opcion;
        if (opcion == 1){
            cout<<"¿Quien eres? Identificate por tu clave de vendedor: ";
            cin>>clave_vendedor;
            cout<<"¿Cuantos articulos diferentes venderas? Numero entero: ";
            cin>>cantidad_articulos;
            este_momento = GETDATE();
            for (int i = 0; i < cantidad_articulos; i++){
                cout<<"Ingrese la clave exacta del articulo "<<i+1<<" de "<<cantidad_articulos<<": ";
                cin>>clave_articulo;
                cout<<"Ingrese la cantidad de "<<clave_articulo<<": ";
                cin>>cantidad_unidades;
                contador = arreglof->generarFactura(este_momento,clave_vendedor,clave_articulo,cantidad_unidades,contador,arreglof);
            }
        }
        if (opcion == 2){arreglof->imprimir_facts(contador,arregloi,arreglof);}
        if (opcion == 3){arreglov->imprimir_lista(n_empleados, arreglov);}
        if (opcion == 4){arregloi->ImprimirArticulos(size_inv,arregloi);}
    }
    cout<<"Hastaaa la proooooximaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.";
    return 0;
}