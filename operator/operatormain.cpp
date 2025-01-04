#include <iostream>

using namespace std;

int main()
{
     Complex c1(1,2);
    Complex c2(3,4);
    Complex c3;

    cout<<"Complex number c1\n";
    c1.Print();
    cout<<"Complex number c2\n";
    c2.Print();
    cout<<"c1 + c2 = \n";
    c3 = c1 + c2;
    c3.Print();
    cout<<"c1 * c2 = \n";
    c3 = c1 * c2;
    c3.Print();
    return 0;
}
