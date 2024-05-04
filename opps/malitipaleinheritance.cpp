// #include<iostream>
// using namespace std;

// class student{
  
//   void std()
//   {   
//       int roll;
//   cout<<"enter the roll no";
//   cin>>roll;
       

//   }  
    
// };
// class marks : public student{
//     int marks;
//     cout<<"enter the marks";
//      cin>>marks;
// };
// int main()
// {
//     marks obj;
//     obj.std();
//     obj.marks();
//     return 0;

// }

// #include <iostream>
// using namespace std;

// // Base class A student
// class a {
// public:
//     void student () {
//          int name;
//         cout << "enter a name" << endl;
//         cin>>name;
//     }
// };

// // Derived class marks
// class b : public a {
// public:
//    void marks() {
//     int marks;

//         cout << "enter the marks" << endl;
//         cin>>marks;
//     }
// };

// // Derived class result
// class c : public b {
// public:
//     void result() {
//         int result;
//         cout << "entr the result" << endl;
//         cin>>result;
//     }
// };

// int main() {

//     a obj();
//     b obj1();
//     c obj2();
//     obj.student();
//     obj1.marks();
//     obj2.result();



   

//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Base class A student
// class A {
// public:
//     void student() {
//         string name;
       
//         cout << "Enter a name: ";
//         cin >> name;
//         cout<<"name is "<<name<<endl;
//     }
// };

// // Derived class marks
// class B : public A {
// public:
//     void marks() {
//         int marks;
//         cout << "Enter the marks: ";
//         cin >> marks;
//         cout<<"marks is "<<marks<<endl;
//     }
// };

// // Derived class result
// class C : public B {
// public:
//     void result() {
//         char result;
//         cout << "Enter the result: ";
//         cin >> result;
//         cout<<"result"<<result<<endl;
//     }
// };

// int main() {
//     A obj;
//     B obj1;
//     C obj2;
//     obj.student();
//     obj1.marks();
//     obj2.result();
   

//     return 0;
// }
#include<iostream>
using namespace std;
 // base class 
class a{
    protected:
    int a,b;
};
// intermediyate class
class b: public a{
    public:
    void input()
    {
        cout<<"enter the two number...............";
        cin>>a>>b;
    }
};
// derived class
class c: bublic b{
    public:
    void add()
    {
        int c;
        c=a+b;
        cout<<"addction"<<c<<endl;

    }
    void sub()
    {
        int c;
        c=a-b;
        cout<<"subtrection"<<c<<endl;
    }
};
 class d{
        public:
        void malti()
        {
            int c;
            c=a*b;
            cout<<"malti"<<c<<endl;
        }
        void div()
        {
            int c;
            c=a/b;
            cout<<"division"<<c<<endl;
        }
    };
//  base class
  class e{
    void show()
    {
        cout<<"all prinrt";
    }
  };

  int main()
  {
    c obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.malti();
    obj.div();
    e obj;
    show.obj();

  }
