//wap to enter 4 digit single no of print first and last digit sum//
#include<iostream>
using namespace std;

int main()
{
    int n,farst,last,sum;
    cout<<"Enter the number: ";
    cin>>n;
    last=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    farst=n;
    sum=farst+last;
    cout<<"The sum of farst and last digit is: "<<sum;
    return 0;



}