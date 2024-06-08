#include<iostream>
using namespace std;

class student{
    private:
    char name;
    int roll_no;
    int marks;
    public:

    void input(){
        cout<<"enter a name\n";
        cin>>name;
        cout<<"enter a roll_no\n";
        cin>>roll_no;
        cout<<"enter a marksh\n";
        cin>>marks;
    }
    void output(){
        cout<<"name is"<<name;
        cout<<"roll_no is"<<roll_no;
        cout<<"marks is"<<marks;
    }

};
int main(){
    student s;
    s.input();
    s.output();
    return 0;
}