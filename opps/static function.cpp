#include<iostream>
using namespace std;

class cse_datascience{
    static int x, y;
    static double any; // Assuming any is of type double
public:
    static void input_function(){
        cout<<"Enter the value of x and y: ";
        cin>>x>>y;
    }

    static void display_function(){
        cout<<"\n value of x: "<<x;
        cout<<"\n value of y: "<<y;
    }

    static void any_function()
    {
        any = (x + y) / 2.0; // Corrected typo 'Y' to 'y' and cast to double
    }

    static void show_function()
    {
        cout<<"\n value of any: "<<any;
    }
};

int cse_datascience::x;
int cse_datascience::y;
double cse_datascience::any; // Initialize any

int main()
{
    cse_datascience::input_function();
    cse_datascience::display_function();
    cse_datascience::any_function();
    cse_datascience::show_function();

    return 0; // Added return 0
}
