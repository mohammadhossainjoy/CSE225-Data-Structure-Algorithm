#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main()
{

    StackType<int>stackobj1;
        StackType<int>stackobj2;


    if(stackobj1.IsEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is  not Empty"<<endl;
    }
    int a;
     cout<<"Inseart Item : "<<endl;
  for(int i=0;i<4;i++){
    cin>>a;
    stackobj1.Push(a);
  }
  if(stackobj1.IsEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is  not Empty"<<endl;
    }
    if(stackobj1.IsFull()){
        cout<<"Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is  not Full"<<endl;
    }

    cout<<"Print the values in the stack : "<<endl;

    for(int i=0;i<4;i++){
        a=stackobj1.Top();
        stackobj1.Pop();
        stackobj2.Push(a);
    }

 for(int i=0;i<4;i++){
    a=stackobj2.Top();
    stackobj2.Pop();
    cout<<a<<" ";
    stackobj1.Push(a);
 }
 cout<<endl;
 cout<<"Push another item  : "<<endl;
 cin>>a;
 stackobj1.Push(a);
  for(int i=0;i<5;i++){
        a=stackobj1.Top();
        stackobj1.Pop();
        stackobj2.Push(a);
    }
cout<<"Print the values in the stack :"<<endl ;
 for(int i=0;i<5;i++){
    a=stackobj2.Top();
    stackobj2.Pop();

    cout<<a<<" ";

    stackobj1.Push(a);
 }
cout<<endl;
if(stackobj1.IsFull()){
      cout<<"Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is  not Full"<<endl;
    }

stackobj1.Pop();
stackobj1.Pop();
cout<<"Print Top Item : "<<stackobj1.Top()<<endl;;

string parenthsis = "(())";
    StackType<char> stackobj3;
    for(int i=0; i< parenthsis.length(); i++) {
        if(parenthsis[i] == '(') {
        stackobj3.Push(parenthsis[i]);
        continue;

        }

    if (stackobj3.IsEmpty()) {

        return false;
            }
    switch(parenthsis[i]) {
    case ')': char x = stackobj3.Top();
            stackobj3.Pop();

             if (x == '(') {
        cout << "\nBalanced";
                        }
            else {
cout << "\nunBalanced";

}
}
}
cout<<endl;
    return 0;
}


