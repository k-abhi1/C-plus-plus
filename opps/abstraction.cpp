#include <iostream>
using namespace std;

class bank
{
private:
    int atmpin, blance;

public:
    string bankname, ifsc;
    int accountno;

    void input()
    {
        atmpin = 23456;
        blance = 234567890;
        bankname = "sbi chandi";
        ifsc = "pytm1234";
        accountno = 1234567678;
    }

    void output()
    {
        cout << atmpin << endl;
        cout << blance << endl;
        cout << bankname << endl;
        cout << ifsc << endl;
        cout << accountno << endl;
        cout << "-----------------------------------";
    }
};

int main()
{
    bank obj;
    obj.input();
    obj.output();

    cout << " raj string to acces my account ...." << endl;
    //  cout<<obj.atmpin<<endl;   not accses
    //  cout<<obj.blance<<endl;   not blance accses
    cout << obj.bankname << endl;
    cout << obj.ifsc << endl;
    cout << obj.accountno << endl;
}