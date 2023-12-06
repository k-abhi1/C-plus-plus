#include <iostream>
using namespace std;

class print
{

public:
    void show()
    {
        cout << "hello world";
    }
};

int main()
{
    print obj;
    obj.show();
}