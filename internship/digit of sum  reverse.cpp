#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,reverse=0,d;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    while(sum>0)
    {
        d=sum%10;
        reverse=reverse*10+d;
        sum=sum/10;
    }   
    cout<<reverse;
    return 0;
    
}