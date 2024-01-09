/*Write a C++ program that inputs a number from the user and displays all perfect number uptothe number entered.*/


#include<iostream>
using namespace std;

int main()
{
    int num, sum, temp;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Perfect numbers upto "<<num<<" are: "<<endl;
    for(int i=1; i<=num; i++)
    {
        sum=0;
        temp=i;
        for(int j=1; j<i; j++)
        {
            if(temp%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;

}