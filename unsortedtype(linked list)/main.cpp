#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{

  int m,n,data,item,i,item1,item2,leng1=0,leng2=0;;


  UnsortedType<int>object1;
  UnsortedType<int>object2;


  cout<<"Enter the number of elements in first input :  ";
  cin>>m;

  cout<<"Enter integer ascending order in First object1 : "<<endl;
  for(int i=0;i<m;i++){

    cin>>data;
    object1.InsertItem(data);
  }

  cout<<"Enter the number of elements in Second input :   ";
  cin>>n;

  cout<<"Enter integer  ascending order in second object2 : "<<endl;
  for(int i=0;i<n;i++){

    cin>>data;
    object2.InsertItem(data);
  }

  UnsortedType<int>finalList;

  object1.GetNextItem(item1);
  object2.GetNextItem(item2);


  while(leng1<object1.LengthIs() && leng2<object2.LengthIs()){
    if(item1>item2){
        finalList.InsertItem(item1);
        leng1++;
        if(leng1<object1.LengthIs()){
            object1.GetNextItem(item1);

        }

    }
    else{
            finalList.InsertItem(item2);
        leng2++;
        if(leng2<object2.LengthIs()){
             object2.GetNextItem(item2);

        }


    }
  }


  while(leng1<object1.LengthIs()){

        finalList.InsertItem(item1);
        leng1++;
        if(leng1<object1.LengthIs())
            object1.GetNextItem(item1);

    }

    while(leng2<object2.LengthIs()){

        finalList.InsertItem(item2);
        leng2++;
        if(leng2<object2.LengthIs())
            object2.GetNextItem(item2);

    }



 cout<<"Expected Output : ";
    while(i=0<finalList.LengthIs()){
        finalList.GetNextItem(item);
        cout<<item<<" ";
        i++;
    }





    return 0;
}
