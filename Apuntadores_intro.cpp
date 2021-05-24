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

    return 0;
}