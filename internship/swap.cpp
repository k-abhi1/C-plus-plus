//wap to enter two number print the swap number//
#include<iostream>
using namespace std;

int main
{
    int a,b,temp;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping, the value of a is: "<<a;
    cout<<"After swapping, the value of b is: "<<b;
    return 0;



}
