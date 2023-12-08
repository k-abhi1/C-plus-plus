#include <iostream>
using namespace std;

class thief
{
private:
    string name, address;
    int mobno;

public:
    void input()
    {
        name = "raj";
        address = "chandi";
        mobno = 23453456;
    }

    void output()
    {

        cout << name << endl;
        cout << address << endl;
        cout << mobno << endl;
    }
};
class police : public thief
{
};

int main()
{
    police obj;
    obj.input();
    obj.output();
}