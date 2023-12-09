// #include<iostream>           clculater artmatic opreter
//using namespace std;

// int main()
// {
//     int ch;
//     cout<<endl<<"Enter your choice: "<<endl<<-------------<<endl;
//     cout<<"1.sum\n2.sub\n 3.mal\n4.exit\n";
//     cout<<"------------------"<<endl<<"enter the choice";
//     cin>>ch;
//     switch(ch)
//     {
//         case 1:
//         int a,b,c;
//         cout<<"enter the value of a";
//         cin>>a;
//         cout<<"enter the value of b";
//         cin>>b;
//         c=a+b;
//         cout<<"sum is"<<c;
//         break;
//         case 2:
//         int a,b,c;
//         cout<<"enter the value of a";
//         cin>>a;
//         cout<<"enter the value of b";
//         cin>>b;
//         c=a-b;
//         cout<<"sub is"<<c;
//         break;
//         case 3:
//         int a,b,c;
//         cout<<"enter the value of a";
//         cin>>a;
//         cout<<"enter the value of b";
//         cin>>b;
//         c=a*b;
//         cout<<"mul is"<<c;
//         break;
//         case 4:
//         exit(0);
//         break;
//         default:
//         cout<<"invalid choice";
//     }

// }


#include <iostream>
using namespace std;

int main() {
    int ch;
    int a, b, c;  

    cout << endl << "Enter your choice:" << endl;
    cout << "1. Sum\n2. Subtract\n3. Multiply\n4. Exit\n";
    cout << "------------------" << endl << "Enter the choice: ";
    cin >> ch;
 
    switch (ch) {
        case 1:
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
            c = a + b;
            cout << "Sum is " << c;
            break;
        case 2:
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
            c = a - b;
            cout << "Subtraction is " << c;
            break;
        case 3:
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
            c = a * b;
            cout << "Multiplication is " << c;
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
//shorting its the prosse of in a proper  oder it many asending oder and diseding oder 

//shoring uses two tye  od data 
1. nomeric data smol to largest largest to smol 
2.txuticl data sport a to z ya z  to a shorting there are many they of shorting algorithmwhich are 
.lineae shorting
.bubble shorting
.insertion shorting
.selection shorting
.quick shorting
.merge shorting
.shell shorting
.heap shorting
.bucket shorting
.radix shorting
