#include<iostream>
using namespace std;
class bank
{
    string name;
    double balance;
    int acc_no;
    public:
    void deposite(double amount)
    {
        balance+=amount;
    }
    void withdraw(double amount)
    {
        if(balance>=amount)
        {
        balance-=amount;
        }
        else{
            cout<<"invalid balnce"<<endl;
        }
    }

    void getdata()
    {
        cout<<"enter the name"<<endl;
        cin>>name;
    }

    void display()
    {
        cout<<"name is"<<name<<endl;
        cout<<"balance is"<<balance<<endl;
        cout<<"acc_no is"<<acc_no<<endl;
    }
    
};
int main()
{
    bank A1;
    A1.getdata();
    A1.deposite(200);
    A1.withdraw(10);
    A1.display();
}