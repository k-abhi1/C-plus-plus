/*Write a C++ program that inputs salary. If the salary is 20000 or more, it deducts 7%of
the salary. If the salary is 10000 or more but less than 20000 it deducts 1000 fromthesalary. If the salary is less than 10000, it deducts nothing. It finally displays thenet salary.*/

#include<iostream>
using namespace std;

int main()
{
    int salary;
    cout<<"Enter your salary: ";
    cin>>salary;
    if(salary>=20000)
    {
        salary=salary-(salary*7)/100;
    }
    else if(salary>=10000)
    {
        salary=salary-1000;
    }
    cout<<"Your net salary is: "<<salary<<endl;
    return 0;
}