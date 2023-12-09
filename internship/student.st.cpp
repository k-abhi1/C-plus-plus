#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    char name[20];
    float marks;

public:               //   */-------------------public-----------------------/*
    void getdata()
    {
        cout << "Enter roll no. : ";
        cin >> roll;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter marks : ";
        cin >> marks;
    }
    void display()
    {
        cout << "Roll no. : " << roll << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

//  wap to amplio theat accepat to ampli record  and print the  both record the struct are emp id emp name emp sellary emp addressof
//  wap crreat the coneect struct that accept 10 person name and mobile number and print all record using structure (arry condept )
 


//  struct with function if be using struct with function     struct varile inside all function 


//  wap to creeat the student id ,name ,fee,that student record using  input function and print the student using display function