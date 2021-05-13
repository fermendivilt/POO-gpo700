#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;

class Vendedor {
    public:
        string Cve_vendedor;
        string Nombre;        
};

class Inventario {
    public:
        string Cve_articulo;
        string Descripcion;
        double Precio;
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
    Vendedor arreglov[2];
    Inventario arregloi[3];
    Factura arreglof[2];

    Vendedor v1 = {"v100","Don Julio el Grande"};
    Vendedor v2 = {"v200","Doña Julia la Pequeña"};
    arreglov[0] = v1;
    arreglov[1] = v2;

    Inventario i1 = {"i300","Tornillito",3};
    Inventario i2 = {"i400","Tornillo",6.5};
    Inventario i3 = {"i500","Tornillote",10.0};
    arregloi[0] = i1;
    arregloi[1] = i2;
    arregloi[2] = i3;
    
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


    return 0;
}