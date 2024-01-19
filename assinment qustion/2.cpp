/*Write a C++ program that inputs a week days and display the name of the day.
for example if user enters 1, it displays “Sunday” and so on*/

#include<iostream>
using namespace std;

int main()
{
   int day;
   cout<<"enter the day";
   cin>>day;
    switch(day)
    {
        case 1:
        cout<<"sounday";
        break;

        case 2:
        cout<<"monday";
        break;

        case 3:
        cout<<"tuesday";
        break;

        case 4:
        cout<<"wednesday";
        break;

        case 5:
        cout<<"thursday";
        break;

        case 6:
        cout<<"friday";
        break;

        case 7: 
        cout<<"saturday";
        break;
         
        default:
            cout<<"Invalid input! Please enter week number between 1-7.";
    }
    return 0;
}



