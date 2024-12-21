#include <iostream>

using namespace std;

int main()
{
    SortedType<int>object;
  int a,b,i;
  bool f;
  cout<<object.LengthIs()<<endl;

    for(i=0;i<5;i++){

        cin>>a;
        object.InsertItem(a);
    }
    cout<<object.LengthIs()<<endl;

    for(i=0;i<5;i++){

        object.GetNextItem(a);
        cout<<a<< " ";
    }
    cout<<endl;
    b=6;
    object.RetrieveItem(b,f);
    if(f==true){
        cout<<"item 6 is found"<<endl;
    }
    else{
        cout<<"item 6 is not found"<<endl;
    }
    if(object.IsFull()){
         cout<<"This is full"<<endl;
    }
    else{
         cout<<"This is not  full"<<endl;
    }
    a=1;
    object.DeleteItem(a);
    object.ResetList();
    for(i=0;i<4;i++){

        object.GetNextItem(a);
        cout<<a<< " ";
    }
    cout<<endl;
    if(object.IsFull()){
         cout<<"This is full"<<endl;
    }
    else{
         cout<<"This is not  full"<<endl;
    }
    return 0;
}
