#include <iostream>
using namespace std;

int main()
{
    int e, f;

    cout << "Please Enter Row  size: ";
    cin >> e; //e=row

    cout << "Please Enter Column size: ";
    cin >> f; //f=coloum


    char** arry = new char*[e];


    for (int i = 0; i < e; i++)
    {
       arry[i] = new char[f];
    }



    cout <<endl<<"Please Enter "<<e <<" Strings and Maximum size "<<f<<" :"<<endl;

    for(int i=0; i<e; i++)
    {
        cin >> arry[i];
    }

    cout <<endl<<e<< " Strings are : "<<endl;


    for (int i = 0; i < e; i++)
    {
        cout << arry[i] <<endl;
    }


    for (int i = 0; i < e; i++){
        delete[] arry[i];
    }


    delete[] arry;

    return 0;

}

