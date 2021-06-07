#include <iostream>
using namespace std;

class DivideByZerito{
    public:
        DivideByZerito(string e){errorMsg = e;};
        string tellmeMsg(){return errorMsg;};
    private:
        string errorMsg;
};

int main(){
    DivideByZerito ohno("Nosepuededividirentre0porquelohacesnoloentiendos.");
    int num = 100;
    int num2 = 0;

    try {
        if(0 != num2)
            num2 = num/num2;
        else
            throw ohno;
        
        cout<<num<<" "<<num2<<endl;
    }
    catch(DivideByZerito e){cout<<e.tellmeMsg()<<endl;};

    cout<<"Pinal Peliiiiiiiiiiiiiiiiiiiiiiiiz"<<endl;

    return 0;
}