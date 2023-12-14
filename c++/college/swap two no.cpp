#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"Before swapping ";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping "<<endl<<a<<endl<<b;
    return 0;


}  