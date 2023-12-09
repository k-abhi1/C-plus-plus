#include<iostream>
using namespace std;

int main()
{
    int a,b,c,big;
    cout<<"enter the three number";
    cin>>a>>b>>c;
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
    cout<<"the largest number is"<<big;
    return 0;
    
}