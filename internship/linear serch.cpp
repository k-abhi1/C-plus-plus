#include<iostream>
using namespace std;

int main()

{
    int a[10],i,sr;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be serched"<<endl;
    cin>>sr;
    for(i=0;i<10;i++)
    {
        if(a[i]==sr)
        {
            cout<<"Element found at index"<<i<<endl;
            break;
        }
    }
    if(i==10)
    {
        cout<<"Element not found";
    }
    return 0;


}