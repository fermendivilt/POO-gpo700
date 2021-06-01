//Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 23 de mayo del 2021
#include <iostream>
using namespace std;

class Test{
    private:
        int count;
    public:
        Test(){count = 5;}
        void operator ++(){
            count = count + 5;
        };
        void operator --(){
            count = count - 10;
        };
        void Display() {
            cout<<"El contador es : "<<count<<endl;
        }
};

int main(){
    Test t;
    ++t;
    t.Display();

    --t;
    --t;
    --t;
    t.Display();

    return 0;
}
