/*Write a C++ program that inputs a week days and display the name of the day.
for example if user enters 1, it displays “Sunday” and so on*/

#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter the day"<<endl;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Sunday"<<endl;
            break;
        case 2:
            cout<<"Monday"<<endl;
            break;
        case 3:
            cout<<"Tuesday"<<endl;
            break;
        case 4:
            cout<<"Wednesday"<<endl;
            break;
        case 5:
            cout<<"Thursday"<<endl;
            break;
        case 6:
            cout<<"Friday"<<endl;
            break;
        case 7:
            cout<<"Saturday"<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
    }
    return 0;
}

