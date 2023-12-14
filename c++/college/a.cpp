#include<iostream>
using namespace std;

int main()
{
    int row,colom;

    cout<<"enter the row";
    cin>>row;

    cout<<"enter the colum";
    cin>>colom; 

    for(int i=1;i<=row;i++){

        for(int j=1;j<=colom;j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}