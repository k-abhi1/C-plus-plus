#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime number";
            break;
        }
    }
    if(i==n)
    {
        cout<<"Prime number";
    }
    return 0;
}