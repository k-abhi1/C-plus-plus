// sum of serise
// sum of serise

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    // Animal obj;
    // obj.sound();  // Calls Animal's sound() function

    Animal* animalPtr;
    Dog dog;
    animalPtr = &dog;

    animalPtr->sound();  // Calls Dog's sound() function

    return 0;
}
