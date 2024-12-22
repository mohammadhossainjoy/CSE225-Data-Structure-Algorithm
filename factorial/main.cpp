#include <iostream>
using namespace std;

/*
unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Driver code
int main()
{
    int num = 6;
    cout << "Factorial of "
         << num << " is " << factorial(num) << endl;



  */
int main(){

    int sum=0;
    int n = 6;


     while(n != 0){
        n=n/2;
     sum=sum+n;
     }

  cout<<sum<<"";


    return 0;
}
