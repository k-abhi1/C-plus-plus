#include <iostream>
using namespace std;

class Base {
public:
    virtual void printMessage() const = 0;
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void printMessage() const override {
        cout << "BEU Patna" << endl;
    }
};

int main() {
    Derived obj;
    obj.printMessage();
    return 0;
}
