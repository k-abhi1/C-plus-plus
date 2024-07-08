// w a p demonstrates how certain exception type are not allowd to be throw

#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 10;
    }
    catch(char c)
    {
        cout << "Caught " << c << endl;
    }
    catch(int i)
    {
        cout << "Caught " << i << endl;
    }
    catch(double d)
    {
        cout << "Caught " << d << endl;
    }
    return 0;
}
