/*Write a C++ program that will ask the user a question with four posible answers. Thequestionshould be asked 20 times. After all the inputs are gathered. The programshouldoutput thenumber of times each answer was selected.*/

#include<iostream>
using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0;
    char ans;
    for(int i=1;i<=20;i++)
    {
        cout<<"Q"<<i<<". What is the capital of India?"<<endl;
        cout<<"a. Delhi"<<endl;
        cout<<"b. Mumbai"<<endl;
        cout<<"c. Kolkata"<<endl;
        cout<<"d. Chennai"<<endl;
        cout<<"Enter your answer: ";
        cin>>ans;
        switch(ans)
        {
            case 'a':
            a++;
            break;

            case 'b':
            b++;
            break;

            case 'c':
            c++;
            break;

            case 'd':
            d++;
            break;

            default:
            cout<<"Invalid input! Please enter a, b, c or d."<<endl;
        }
    }
    cout<<"Total number of times each answer was selected:"<<endl;
    cout<<"a. "<<a<<endl;
    cout<<"b. "<<b<<endl;
    cout<<"c. "<<c<<endl;
    cout<<"d. "<<d<<endl;
    return 0;
}