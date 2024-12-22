#include <iostream>
using namespace std;

void swap1(int &m,int &n){
int temp;
temp=m;
m=n;
n=temp;
}

void swap2(int *u,int *v){
int *temp;
temp=u;
u=v;
v=temp;
}

void swap3(int *e,int *f){
int temp;
temp=*e;
*e=*f;
*f=temp;
}

int main()
{
    int a=5,b=6;
    int x=5,y=6;
    int p=5,q=6;

    swap1(a,b);
    cout << "a : " <<a<< endl;
    cout << "b : " <<b<< endl;

    swap2(&x,&y);
    cout << "x : " <<x<< endl;
    cout << "y : " <<y<< endl;

    swap3(&p,&q);
    cout << "p : " <<p<< endl;
    cout << "q : " <<q<< endl;
    return 0;
}
