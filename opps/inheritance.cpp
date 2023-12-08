// #include<iostream>
// using namespace std;

// class dad
// {   protected:
//     int ammount;

//     void input()
//     {
//         ammount=123456;
//     }

// };
// class son:public dad
// {

//     int mony;
//     public:
//    void show()
//    {
//     mony=123345;
//     cout<<ammount;
//     cout<<mony;
//    }

// };

// int main()
// {

//     son obj;
//     obj.input();
//     obj.show();

// }

// #include<iostream>
// using namespace std;

// class dad {
// protected:
//     int ammount;

//     void input() {
//         ammount = 123456;
//     }
// };

// class son : public dad {
//     int mony;

// public:
//     void initializeAmmount() {
//         input(); // Access the protected function of the base class
//     }

//     void show() {
//         mony = 123345;
//         cout <<"dad ammount "<< ammount << endl;
//         cout <<"son mony"<< mony << endl;
//     }
// };

// int main() {
//     son obj;
//     obj.initializeAmmount();
//     obj.show();

//     return 0;
// }

//  #include<iostream>
//  using namespace std;

//  class A
//  {
//     protected:
//     int a,b;
//     public:
//     void input()
//     {
//         cout<<"enter the two number...............";
//         cin>>a>>b;
//     }
//     class B: public A
//     {   int c;
//         public:
//         void add()
//         {
//             c=a+b;
//             cout<<"addction"<<c<<endl;

//         }
//         void sub()
//         {
//             c=a-b;
//             cout<<"subtrection"<<c<<endl;
//         }

//     };
//     class C: public B
//     {   int c;
//         public:

//         void malti()
//         {

//             c=a*b;
//             cout<<"malti"<<c<<endl;
//         }

//         void div()
//         {

//             c=a/b;
//             cout<<"division"<<c<<endl;    // TODO  FIX ME IN ERROR
//         }
//         }

//     };

//     int main()
//     {
//          C obj;
//         obj.input();
//         obj.add();
//         obj.sub();
//         obj.sub();
//         obj.malti();
//         obj.div();

//     }

// #include <iostream>
// using namespace std;

// class Operation
// {
// protected:
//     int a, b;

// public:
//     void input()
//     {
//         cout << "Enter two numbers: ";
//         cin >> a >> b;
//     }
// };

// class Addition : public Operation
// {
// public:
//     void add()
//     {
//         cout << "Addition: " << a + b << endl;
//     }
// };

// class Subtraction : public Addition
// {
// public:
//     void subtract()
//     {
//         cout << "Subtraction: " << a - b << endl;
//     }
// };

// class Multiplication : public Subtraction
// {
// public:
//     void multiply()
//     {
//         cout << "Multiplication: " << a * b << endl;
//     }
// };

// class Division : public Multiplication
// {
// public:
//     void divide()
//     {
//         if (b != 0)
//         {
//             cout << "Division: " << a / b << endl;
//         }
//         else
//         {
//             cout << "Cannot divide by zero!" << endl;
//         }
//     }
// };

// int main()
// {
//     Division obj;
//     obj.input();
//     obj.add();
//     obj.subtract();
//     obj.multiply();
//     obj.divide();

//     return 0;
// }


#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    void makeSound() {
        cout << "Animals make sounds." << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    // Accessing base class method
    myDog.makeSound();
    myCat.makeSound();

    // Accessing derived class methods
    myDog.bark();
    myCat.meow();

    return 0;
}

