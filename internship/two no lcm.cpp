#include<iostream>
using namespace std;

int main()
{
    int n1,n2,max;
    cout<<"Enter the two numbers: ";
    cin>>n1>>n2;
    max=(n1>n2)?n1:n2;
    while(1)
    {
        if(max%n1==0 && max%n2==0)
        {
            cout<<max;
            break;
        }
        ++max;
    }
}