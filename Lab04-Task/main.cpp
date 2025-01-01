#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include<iostream>
using namespace std;

int main(){
UnsortedType<int> objectUnsort;

cout<<"Insert 4 item : " ;
for(int i=0;i<4;i++){
	int item;
	cin>>item;
	objectUnsort.InsertItem(item);
}

int item;
cout<<"Inserting List :";;
for(int i=0;i<objectUnsort.LengthIs();i++){
objectUnsort.GetNextItem(item);
cout<<item<<" ";

}

cout<<endl<<"The length of the list : "<<objectUnsort.LengthIs()<<endl;
item = 1;
objectUnsort.InsertItem(item);
objectUnsort.ResetList();

cout<<"After Inset the Print List : ";
for(int i=0;i<objectUnsort.LengthIs();i++)
{
objectUnsort.GetNextItem(item);
cout<<item<<" ";
}
item = 4;
bool found;
objectUnsort.RetrieveItem(item,found);
if(found)
{



    cout<<endl<<"Item is found";
}
else{
    cout<<endl<<"Item is not found";
}
item = 5;
objectUnsort.RetrieveItem(item,found);
if(found)
    cout<<endl<<"Item is found";
else
    cout<<endl<<"Item is not found";

 item = 9;
objectUnsort.RetrieveItem(item,found);
if(found)
    cout<<endl<<"Item is found";
else
    cout<<endl<<"Item is not found";
 item = 10;
objectUnsort.RetrieveItem(item,found);
if(found)
    cout<<endl<<"Item is found";
else
    cout<<endl<<"Item is not found";



if(objectUnsort.IsFull())
    cout<<endl<<"List is full";
else
cout<<endl<<"The list is not full";

objectUnsort.DeleteItem(5);
objectUnsort.ResetList();

objectUnsort.IsFull();
if(objectUnsort.IsFull())
   cout<<endl<<"List is full";
else
cout<<endl<<"List is not full";


objectUnsort.DeleteItem(1);
objectUnsort.ResetList();

cout<<endl<<"After delete 1: ";
for(int i=0;i<objectUnsort.LengthIs();i++)
    {

    objectUnsort.GetNextItem(item);
    cout<<item<<" ";

}

cout<<endl<<"After delete 6: ";

objectUnsort.DeleteItem(6);
objectUnsort.ResetList();

for(int i=0;i<objectUnsort.LengthIs();i++)
{

    objectUnsort.GetNextItem(item);
    cout<<item<<" ";
}


return 0;
}


