#include <iostream>
using namespace std;
#include <string>

int main() {
   string firstName, lastName;

    // Ask for the first name
    cout << "Enter your first name: ";
    getline(cin, firstName);

    // Ask for the last name
    cout << "Enter your last name: ";
    getline(cin, lastName);

    // Print the names in reverse order
   cout << "Your name in reverse order is: " << lastName << " " << firstName <<endl;

    return 0;
}
