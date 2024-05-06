
// basic example in tamplate in example  class template 
#include<iostream>
using namespace std;

template <class c >
class print
{
public:

print(c x, c y)
{
    cout<<x<<endl<<y<<endl;
}
};

int main(){ 
   
    print <int> obj(10,20);
    print <char> obj1('a','b');
    print <float> obj2(234.34,234.34);
    print <string> obj3("abhishek","A");
    // print <char> obj4("welcome to the page........");
    

    return 0;

}