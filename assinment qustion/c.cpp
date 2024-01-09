/*Write a C++ program that inputs a number from the user and displays Fibonacci seriesuptothe number entered.*/

#include<iostream>
using namespace std;

int main()
{
    int num, a=0, b=1, c;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Fibonacci series upto "<<num<<" are: "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1; i<=num; i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}