#include<iostream>
using namespace std;

int main()

{
    int costprice,sellingprice;
    cout<<"Enter the cost price: ";
    cin>>costprice;
    cout<<"Enter the selling price: ";
    cin>>sellingprice;
    if(costprice>sellingprice)
    {
        cout<<"Loss";
    }
    else if(costprice<sellingprice)
    {
        cout<<"Profit";
    }
    else
    {
        cout<<"Neither";
    }
}