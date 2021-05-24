//Fernando de Jesus Mendivil Terminel - A00232280
//TC1030 Grupo 700
//24 de mayo del 2021

#ifndef Forma_h
#define Forma_h

class Forma {
private:
    int x;
    int y;
public:
    Forma();
    Forma(int, int);
    virtual void draw(); //virtual solo en declaracion
    int getValX(){return x;};
    int getValY(){return y;};
};
Forma::Forma(){
    x=0;
    y=0;
}
Forma::Forma(int valx, int valy){
    x = valx;
    y = valy;
}
void Forma::draw(){
    cout<<"No hay una forma definida."<<endl;
}

#endif