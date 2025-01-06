#include <iostream>
#include "Unsortedtype.h"
#include "Student.cpp"
using namespace std;

int main()
{
    Student objectNumber1(15234,"Jon",2.6);
     Student objectNumber2(13732,"Tyrion",3.9);
      Student objectNumber3(13569,"Sandor",1.2);
       Student objectNumber4(15467,"Ramsey2",3.1);
        Student objectNumber5(16285,"Arya",3.1);

        UnsortedType info;
        int idnum,m,n;
        string nameof;
        double cgpanum;

        info.InsertItem(objectNumber1.id,objectNumber1.name,objectNumber1.cgpa);
        info.InsertItem(objectNumber2.id,objectNumber2.name,objectNumber2.cgpa);
        info.InsertItem(objectNumber3.id,objectNumber3.name,objectNumber3.cgpa);
        info.InsertItem(objectNumber4.id,objectNumber4.name,objectNumber4.cgpa);

        info.InsertItem(objectNumber5.id,objectNumber5.name,objectNumber5.cgpa);

        idnum=15467;
        info.DeleteItem(idnum);

        bool fal;
        n=13469;

        info.RetrieveItem(n,fal);

        if(fal){

            cout<<"Item is found"<<endl;

            for(m=0;m<info.LengthIs();m++){
                info.GetNextItem(idnum,nameof,cgpanum);
                if(m==n){
                    cout<<idnum<<" "<<nameof<<" "<<cgpa<<endl;
                }
            }
        }







}
