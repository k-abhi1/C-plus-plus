// w a p in c to  red the number of value in arry & disply them in reverse order?

#include<iostream>
using namespace std;

int main()
{

    int arry[5];
    
    int i;
    
    for(i=0;i<5;i++)
    {
        
        cin>>arry[i];
    }
    for(i=4;i>=0;i--)
    {
        cout<<arry[i]<<endl;
    }
    return 0;
}