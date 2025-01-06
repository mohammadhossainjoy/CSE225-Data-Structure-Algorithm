#include<iostream>
#include "UnsortedType.h"
using namespace std;

UnsortedType::UnsortedType()
{
    length=0;
    currentPos=-1;
}


void UnsortedType::MakeEmpty()
{

    length=0;
}


bool UnsortedType::IsFull()
{

    return (length=MAX_ITEMS);
}


int UnsortedType::LengthIs()
{

    return length;
}


void UnsortedType::ResetList()
{

    currentPos=-1;
}


void UnsortedType::GetNextItem(ItemType& item)
{

    currentPos++;
    item=info[currentPos];
}


void UnsortedType::RetrieveItem(ItemType& item,bool &found)
{

    int location=0;
    bool moreToSearch=(location<length);
    found=false;
    while(moreToSearch && !found)
    {

        if(item==info[location])
        {
            found=true;
            item=info[location];
        }
        else
        {
           location++;
           moreToSearch=(location<length);
        }
    }
}


void UnsortedType::InsertItem(ItemType item)
{
    if(IsFull())
    {
        cout<<"array is full.so no insert item"<<endl;
    }
    else
        {
            idnum[length]=i;
            nameof[length]=nam;
            cgpanum[length]=cgp;
        length++;
    }

}

void UnsortedType::DeleteItem(ItemType item)
{

    int location=0;
    bool moreToSearch=location<length;
    while(i != idnum[location] && moreToSearch){
        location++;
        moreToSearch=location<length;
    }
        idnum[location]=idnum[length-1];
        nameof[location]=nameof[length-1];
        cgpanum[location]=cgpanum[length-1];

    length--;

}
