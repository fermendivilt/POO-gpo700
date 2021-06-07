#include <iostream>
using namespace std;

void main2();
void main3();
void main4();

int main(){
    int num1 = 100; //o float o double
    int num2 = 0;

    try{
        if (0 != num2){
            num2 = num1/num2;
        }
        else{
            throw "Ups!";
        }
        cout<<num1<<" "<<num2<<endl;
    }
    catch(const char* e){
        cout<<e<<" Divisor debe ser distinto de cero."<<endl;
    }
    cout<<"Pelicidades"<<endl;

    main2(); //este es una division entre floats (valor para infinito)
    //main3(); este falla por dividir enteros entre 0, y nunca termina; mejor no ejecutarlo
    main4();
    return 0;
};

void main2(){
    float num21 = 100;
    float num22 = 0;
    num22 = num21/num22;

    cout<<num21<<" "<<num22<<endl;
    cout<<"Segundo pinal"<<endl;
};

void main3(){
    int num31 = 100;
    int num32 = 0;
    num32 = num31/num32;

    cout<<num31<<" "<<num32<<endl;
    cout<<"Nunca se llegara a este"<<endl;
};

void main4(){
    int num = 100;
    int num2 = 0;

    try{
        if (0 != num2){
            num2 = num/num2;
        }
        else{
            throw true;
        }
        cout<<num<<" "<<num2<<endl;
    }
    catch(const char* e){cout<<e<<" Divisor debe ser distinto de cero."<<endl;}
    catch (int e) {cout<<e<<" Divisor debe ser distinto de cero."<<endl;}
    catch (double e) {cout<<e<<" Divisor debe ser distinto de cero."<<endl;}
    catch (...) {cout<<" Default; Divisor debe ser distinto de cero."<<endl;};
    cout<<"Pinal Peliz"<<endl;
};