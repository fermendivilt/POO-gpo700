Randy Oliver Ortega Cota - A00232304
Fernando de Jesús Mendivil Terminel - A00232280
/*
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
            cout<<"Clave"<<"\t\tDescripcion"<<"\t\t\tPrecio\n";
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
};

string GETDATE(){
    char out[14];
    time_t t=time(NULL);
    strftime(out, sizeof(out), "%Y%m%d%H%S", localtime(&t));
    Sleep(2000);  // pauses for 10 seconds
    return out;
}


int GeneraFactura(Factura arrf[], int contador, Vendedor ven, Inventario art, int cant){
    Factura f1;
    f1.Cve_vendedor = ven.Cve_vendedor;
    f1.Cve_articulo = art.Cve_articulo;
    f1.Cantidad = cant;
    f1.No_Factura = "F" + GETDATE();
    arrf[contador] = f1;
    contador++;
    return contador;
};

int main() {
    int n_empleados, size_inv=3, opcion;
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


    cout <<"Configuración inicial terminada, ya puede hacer facturas :D.";

    /*while (opcion != 0){
        int contadorFactura = 0;
        contadorFactura = GeneraFactura(arreglof, contadorFactura, v1, i2, 32);

        // imprimimos todas las facturas
        cout << "Facturas Generadas "<< endl;
        cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;

        string nombreArticulo;
        for (int j=0; j<=contadorFactura; j++){
            for (int k=0;k<sizeof(arregloi)/sizeof(arregloi[0]);k++){
                if (arreglof[j].Cve_articulo == arregloi[k].Cve_articulo)
                    nombreArticulo = arregloi[k].Descripcion;
            }
            cout<<arreglof[j].No_Factura<<"\t"
                <<arreglof[j].Cve_vendedor<<"\t\t"
                <<arreglof[j].Cve_articulo<<"\t"
                <<nombreArticulo<<endl;

        }

        cout <<"¿Desea cerrar la terminal? Introduzca 0 para cerrar, o cualquier otro número para seguir.";
        cout <<"No se guardarán las facturas.";
        cin >> n_empleados;
    }
*/
    return 0;
}