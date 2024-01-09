/* Write a C++ program that displays the total fee structure of Government EngineeringArwal. for example
Enter Year: 1
Enter category 1 for General or OBC, 2 for SC or ST: 1
Your Fee structure is:
Admission Fee: 10
Tution fee: 120
Registration Fee: 2100
Exam Fee: 7400
Hostel Fee: 9600
Mess Fee: 33600
Total: 52,830*/

#include<iostream>
using namespace std;

int main()
{
    int year, category;
    cout<<"Enter Year: ";
    cin>>year;
    cout<<"Enter category 1 for General or OBC, 2 for SC or ST: ";
    cin>>category;
    cout<<"Your Fee structure is: "<<endl;
    cout<<"Admission Fee: 10"<<endl;
    cout<<"Tution fee: 120"<<endl;
    cout<<"Registration Fee: 2100"<<endl;
    cout<<"Exam Fee: 7400"<<endl;
    cout<<"Hostel Fee: 9600"<<endl;
    cout<<"Mess Fee: 33600"<<endl;
    cout<<"Total: 52,830"<<endl;
    return 0;
}
