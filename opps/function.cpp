#include<iostram>
using namespace std;

int sum_function(int x, int y)
{
    int p;
    p= x+y;
    return(p);
}

int main()
{
    int a, b, sum;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum= sum_function(a, b);
    cout<<"Sum of the numbers is: "<<sum;
    return 0;

}