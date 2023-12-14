#include<iostream>
using namespace std;

int main()
{
    int n,last;

    cout<<"enter the any nuber";
    cin>>n;

    last=n%10;

    while(n>10){
        n=n/10;


    }

    cout<<"print the first digit "<<"----"<< n<<endl;
    cout<<"print the last digit"<<"----"<<last<<endl;

    return 0;
}