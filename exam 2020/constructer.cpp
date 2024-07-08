#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    // Constructor with parameter
    Circle(double r) {
        radius = r;
    }

    // Function to calculate area
    double calculateArea() {
        return 3.14159 * radius * radius; // Pi * r^2
    }
};

int main(){
    Circle c(5.0);
    cout << "Area = " << c.calculateArea() << endl;
    return 0;
}



// Define a class to represent a bank account. Include the following members:
// Data members:
// 1. Name of the depositor
// 2. Account number
// 3. Type of account
// 4. Balance amount in the account
// Member functions:
// 1. To assign initial values
// 2. To deposit an amount
// 3. to the widrwal n amount after checking the blance
// 4. To display name and balance Write a main program which h
// dies lo eustomers.