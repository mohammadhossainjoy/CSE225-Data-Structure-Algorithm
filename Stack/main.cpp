#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main()
{
    StackType<char> ob1;

    char s1[] = {'(','(','(',')',')'};
    int i;
    for(i=0; i<sizeof(s1); i++){

        if(s1[i]=='('){

            ob1.Push(s1[i]);
        }
        else{

            ob1.Pop();

        }
    }

    if(ob1.IsEmpty()){

                cout<<"Stack is balanced"<<endl;
            }
            else{

                cout<<"Stack is unbalanced"<<endl;
            }


    return 0;
}
