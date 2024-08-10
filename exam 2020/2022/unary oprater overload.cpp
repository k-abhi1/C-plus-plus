#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    // Overload the unary minus operator
    Number operator-() const {
        return Number(-value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number num(10);
    cout << "Original value: ";
    num.display();

    Number negNum = -num;
    cout << "Negated value: ";
    negNum.display();

    return 0;
}
