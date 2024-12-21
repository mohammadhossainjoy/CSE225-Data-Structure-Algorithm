#include <iostream>
using namespace std;
int main(){

int a, b;//a=row & b=coloum

cout << "Typing the rows size: " << endl;
cin >> a;

cout << "Typing the column size: " << endl;
cin >> b;

cout << "Please enter the Elements of  2D Array : " << endl;

  int** arry = new int*[a];

for (int m = 0; m< a; ++m)
    {
     arry[m] = new int[b];
    }


for (int m = 0; m < a; m++)
    {
    for (int n = 0; n < b; n++)
     {
        cin >> arry[m][n];
    }
}

cout << endl;

cout << "Output : " << endl;

for (int m = 0; m < a; m++)
    {
    for (int n = 0; n< b; n++)
     {
        cout << arry[m][n] << " ";
    }
    cout << endl;
}

cout << endl;

for (int i = 0; i < a; ++i)
    {
    delete[] arry[i];
}

delete[] arry;


return 0;
}
