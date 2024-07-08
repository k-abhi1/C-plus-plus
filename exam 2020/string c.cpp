// w a p to define a class string and use overloaded == oprater to compare to string 

#include <iostream>
using namespace std;
class String
{
    private:
    string str;
    public:
    String(string s)
    {
        str = s;
    }
    bool operator==(String s)
    {
        if(str == s.str)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    String s1("Hello");
    String s2("World");
    if(s1 == s2)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }
    return 0;
}
