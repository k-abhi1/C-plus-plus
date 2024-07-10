#include <iostream>  // Include standard input-output stream header
using namespace std;

int main()  // Use int main() instead of void main() for standard compliance
{
    double amount, res;
    char ch;
    
    cout << "Welcome to Bharat Petroleum" << endl;
    cout << "Press P for Petrol and D for Diesel:" << endl;
    cin >> ch;
    
    if (ch == 'P'|| ch=='p')  // Use if-else structure correctly
    {
        cout << "Enter your Amount:" << endl;
        cin >> amount;
        res = (amount / 105.18) * 1;  // Assuming 1 USD = 105 INR for petrol
        cout << "Petrol purchased in litres:" << endl << res;
    }
    else if (ch == 'D' || ch=='d')  // Use else if for mutually exclusive conditions
    {
        cout << "Enter your Amount:" << endl;
        cin >> amount;
        res = (amount / 92.04) * 1;  // Assuming 1 USD = 92 INR for diesel
        cout << "Diesel purchased in litres:" << endl << res;
    }
    else
    {
        cout << "Invalid choice. Please choose either P or D." << endl;
    }
    
    return 0;  // Return 0 to indicate successful completion of the program
}
