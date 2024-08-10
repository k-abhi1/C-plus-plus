#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    ~Complex() {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    friend Complex sum(const Complex& c1, const Complex& c2);

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex sum(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2);

    cout << "Complex number 1: "; c1.display();
    cout << "Complex number 2: "; c2.display();

    cout << "Sum (using + operator): "; (c1 + c2).display();
    cout << "Difference (using - operator): "; (c1 - c2).display();
    cout << "Sum (using friend function): "; sum(c1, c2).display();

    return 0;
}
