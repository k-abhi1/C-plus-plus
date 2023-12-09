#include<iostream>
using namespace std;

int main()
{
   float eng, phy, chem, math, comp; 
    float total, average, percentage;
  
    cout << "Enter marks of five subjects: ";
    cin >> eng >> phy >> chem >> math >> comp;

    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    cout << "Total marks = " << total << endl;
    cout << "Average marks = " << average << endl;
    cout << "Percentage = " << percentage << endl;

    if(percentage >= 90)
    {
        cout << "Grade A";
    }
    else if(percentage >= 80)
    {
        cout << "Grade B";
    }
    else if(percentage >= 70)
    {
        cout << "Grade C";
    }
    else if(percentage >= 60)
    {
        cout << "Grade D";
    }
    else if(percentage >= 40)
    {
        cout << "Grade E";
    }
    else
    {
        cout << "Grade F";
    }
}