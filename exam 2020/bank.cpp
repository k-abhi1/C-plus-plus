// Define a class to represent a bank account. Include the following members:
// Data members:
// 1. Name of the depositor
// 2. Account number
// 3. Type of accountx
// 4. Balance amount in the account
// Member functions:
// 1. To assign initial values
// 2. To deposit an amount
// 3. to the widrwal n amount after checking the blance
// 4. To display name and balance Write a main program which h
// dies lo eustomers.

#include <iostream>
using namespace std;
class Bank
{
    private:
    string name;
    int account_number;
    string account_type;
    double balance;
    public:
    void assign(string n, int a, string t, double b)
    {
        name = n;
        account_number = a;
        account_type = t;
        balance = b;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    { 
        if(balance >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    Bank b;
    b.assign("John Doe", 12345, "Savings", 1000);
    b.deposit(500);
    b.withdraw(200);
    b.display();
    return 0;
}

// w a p to define a class string and use overloaded == oprater to compare to string 