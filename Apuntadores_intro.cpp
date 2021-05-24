#include <iostream>
using namespace std;

int main()
{
    int myNum = 7;
    int *p = &myNum;

    cout << "mynum content: " << myNum << endl;
    cout << "*p content: " << *p << endl
         << endl;

    cout << "mynum adress: " << &myNum << endl;
    cout << "*p adress: " << p << endl<< endl;

    //----------------------------------------------
    int *j = new int;
    *j = 7;

    cout<<"*j content "<< *j<< endl;
    cout<<"Where in heap "<<j<<endl;
    cout<<"j resides in stack "<<&j<<endl;

    return 0;
}