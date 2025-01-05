/*Task  2:  Using the new operator, allocate a two dimensional character array. Again the number of rows and columns
are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from
the user and then print the strings. Finally de-allocate the array using the delete operator.
*/
#include <iostream>
using namespace std;
int main(){

int row,col;

cout<<"Enter the number of Row : ";
cin>>row;
cout<<"Enter the number of Coloum : ";
cin>>col;

//Dynamically allocated a 2D array

char** array;
array = new char*[row];

for(int i=0;i<row;i++){
        //allocating memory each row
    array[i]=new char[col];

 cout<<"Enter String: ";
 cin>>array[i];
}

cout<<"THE Strings are: "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<array[i][j];
    }
    cout<<""<<endl;
}

delete[] array;


return 0;
}
