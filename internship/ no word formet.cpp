#include<iostream>
using namespace std;

int main()
{

    int n,num,digit;
    cout<<"Enter the number: ";
    cin>>n;

    digit=(int) log10(n);
    
    while(n!=0)                 //TODO ERROR THE CODE//
 
 {
     num = (num * 10) + (n % 10);
        n /= 10;
 }
 digits =  digits - ((int) log10(num));  
    while(num != 0)
    {
        switch(num%10)
        {
            case 0
            cout<<"Zero";
            break;
            case 1
            cout<<"One";
            break;
            case 2
            cout<<"Two";
            break;
            case 3
            cout<<"Three";
            break;
            case 4
            cout<<"Four";
            break;
            case 5
            cout<<"Five";
            break;
            case 6
            cout<<"Six";
            break;
            case 7
            cout<<"Seven";
            break;
            case 8
            cout<<"Eight";
            break;
            case 9
            cout<<"Nine";
            break;
        }
         num /= 10;
    }
    while(digits)
    {
        printf("Zero ");
        digits--;
    }
    
    return 0;
}
