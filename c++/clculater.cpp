#include<iostream>
using namespace std;

int main()
{
    int a,b,c,choice;

    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
 
    cout<<"enter the choice";
    cin>>choice;

    switch(choice)
    {

        case 1 :
        c=a+b;
        cout<<c<<endl;
        break;

 case 2 :
        c=a-b;
        cout<<c<<endl;
        break;

 case  3:
        c=a*b;
        cout<<c<<endl;
        break;

 case 4 :
        c=a/b;
        cout<<c<<endl;
        break;   



        default:cout<<"inviled stement plase enter the key "<<endl;




    }
}