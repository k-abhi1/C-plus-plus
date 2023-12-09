#include<iostream>
using namespace std;

int main()
{

    int base,exp;
    long long result=1;
    cout<<"Enter the base and exponent: ";
    cin>>base>>exp;

    while(exp!=0)
    {
        result=result*base;
        --exp;
    }
    cout<<result;
    return 0;
    
}