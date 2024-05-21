// #include <iostream>
// using namespace std;


// int main() {
//     int rows;
// cout << "Enter the number of rows: ";
//    cin >> rows;

//     for (int i = rows; i >= 1; --i) {
//         for (int space = 0; space < rows - i; ++space)
//             cout << "  ";

//         for (int j = i; j <= 2 * i - 1; ++j)
//            cout << "* ";

      
//      for (int j = 0; j < i - 1; ++j)
//             cout << "* ";

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int rows;
//     cout << "Enter the number of rows: ";
//     cin >> rows;

//     for (int i = 1; i <= rows; ++i) {
//         for (int space = 1; space <= rows - i; ++space)
//             cout << "  ";

//         for (int j = 1; j <= 2 * i - 1; ++j)
//             cout << "* ";

//         cout << endl;
//     }

//     return 0;
// }



// sum of serise
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}



// w a p to c++ count how many times particular function called throug the static variable 
// #include <iostream>
// using namespace space;

// void myFunction() {
//     // Static variable to count the number of times the function is called
//     static int count = 0;
//     count++;

//    cout << "Function called " << count << " times." <<endl;
// }

// int main() {
//     // Calling myFunction multiple times
//     myFunction();
//     myFunction();
//     myFunction();

//     return 0;
// }



#include <iostream>

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize complex number
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Overload the + operator to add two complex numbers
    Complex operator+(Complex const &obj) const {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Function to display complex number
    void display() const {
        std::cout << "Result: " << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(2.5, 1.5);

    Complex sum = c1 + c2; // Using the overloaded + operator
    sum.display();

    return 0;
}
