/*Write a C++ program that inputs a number from the user and displays all Armstrongnumber uptothe number entered.*/

#include<iostream>
using namespace std;

int main()
{
    int num, temp, rem, sum;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Armstrong numbers upto "<<num<<" are: "<<endl;
    for(int i=1; i<=num; i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
