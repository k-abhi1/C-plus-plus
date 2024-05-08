// #include<iostream>
// using namespace std;

// class a {
// protected:
//     int hour;
//     float min;
// public:
//     void first1() {
//         cout << "Enter the hour: ";
//         cin >> hour;
//     }
    
//     void second1() {
//         cout << "Enter the minute: ";
//         cin >> min;
//     }
    
//     void first2() {
//         cout << "Enter the hour: ";
//         cin >> hour;
//     }

//     void second2() {
//         cout << "Enter the minute: ";
//         cin >> min;
//     }
// };

// class b : public a {
// public:
//     void add1() {
//         float addTime1 = hour + min / 60;
//         cout << "Total time: " << addTime1 << " hours" << endl;
//     }

//     public:
//     void add2() {
//         float addTime2 = hour + min / 60;
//         cout << "Total time: " << addTime2 << " hours" << endl;
//     }
// public:
//     void show()
//     {
//         ad=addTime1+addTime2;
//         cout<<"add two time"<<ad;

//     }
// };

// int main() {
//     b obj;
//     obj.first1();
//     obj.second1();
//     obj.first2();
//     obj.second2();
//     obj.add1();
//      obj.add2();

//     return 0;
// }

#include<iostream>
using namespace std;

class a {
protected:
    int hour;
    float min;
public:
    void first1() {
        cout << "Enter the hour: ";
        cin >> hour;
    }
    
    void second1() {
        cout << "Enter the minute: ";
        cin >> min;
    }
    
    void first2() {
        cout << "Enter the hour: ";
        cin >> hour;
    }

    void second2() {
        cout << "Enter the minute: ";
        cin >> min;
    }
};

class b : public a {
public:
    float addTime1, addTime2; // Declare here to make them accessible in other member functions

    void add1() {
        addTime1 = hour + min / 60;
        cout << "Total time 1: " << addTime1 << " hours" << endl;
    }

    void add2() {
        addTime2 = hour + min / 60;
        cout << "Total time 2: " << addTime2 << " hours" << endl;
    }

    void show() {
        float ad = addTime1 + addTime2;
        cout << "Total time: " << ad << " hours" << endl;
    }
};

int main() {
    b obj;
    obj.first1();
    obj.second1();
    obj.first2();
    obj.second2();
    obj.add1();
    obj.add2();
    obj.show();

    return 0;
}
