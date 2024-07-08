// w a p demostrate example of herarical inheritance to get sqare and cube of a number

#include <iostream>
using namespace std;

class Number
{
    protected:
    int num;
    public:
    void getNum(int n)
    {
        num = n;
    }
};
class Square : public Number
{
    public:
    void display()
    {
        cout << "Square of " << num << " is " << num * num << endl;
    }
};
class Cube : public Number
{
    public:
    void display()
    {
        cout << "Cube of " << num << " is " << num * num * num << endl;
    }
};
int main()
{
    Square s;
    Cube c;
    s.getNum(5);
    s.display();
    c.getNum(5);
    c.display();
    return 0;
}
