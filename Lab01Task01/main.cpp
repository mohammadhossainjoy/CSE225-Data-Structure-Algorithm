/*Task 1: Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as
input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.
*/
#include <iostream>
using namespace std;
int main(){

int arraySize=0;

cout<<"enter size of array: ";
cin>> arraySize;

int *arr=new int[arraySize];
cout<<"please enter element of array: ";
for(int i=0;i<arraySize;i++)
    {
        cin>>arr[i];

}
cout<<"elements of array are: ";
for(int i=0;i<arraySize;i++)
    {
        cout<<arr[i]<< " ";

}


}
