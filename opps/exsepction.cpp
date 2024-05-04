//exception handling single try and singlle catch block?

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter a and b: ";
//     cin >> a >> b;
//     try {
//         if (b == 0) {
//             throw "Division by zero!";
//         }
//         cout << "a/b = " << a/b << endl;
//     }
//     catch (const char* msg) {
//         cerr << msg << endl;
//     }
//     return 0;
// }

// // single try and multiple catch block

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter a and b: ";
//     cin >> a >> b;
//     try {
//         if (b == 0) {
//             throw "Division by zero!";
//         }
//         if (b == 1) {
//             throw "Division by one!";
//         }
//         cout << "a/b = " << a/b << endl;
//     }
//     catch (const char* msg) {
//         cerr << msg << endl;
//     }
//     return 0;
// }

// // catcing all type of errors through then single catch block

// #include <iostream>
// using namespace std;

// inr main()
// {
//     int a, b;
//     cout << "Enter a and b: ";
//     cin >> a >> b;
//     try {
//         if (b == 0) {
//             throw "Division by zero!";
//         }
//         if (b == 1) {
//             throw "Division by one!";
//         }
//         cout << "a/b = " << a/b << endl;
//     }
//     catch (...) {
//         cerr << "Some error occurred!" << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"enter a number";
//     cin>>a>>b;

//     try{
//         if(b==0){  

//         }
//     }
//     cout<<a/b<<endl;
//      try::trow("can divde in zero");

//     catch(const char* msg){
//         cerr<<msg<<endl;
//     }
// }



// inharitance 

#include<iostream>
using namespace std;


class a{

    private:
    int marks;

};
class b:public a{
    void ce(){
    cout<<"enter a number civil enginee";
    cout<<"enter marks";
    cin>>marks;
    cout<<"print marks"<<marks;

}

};
class c:public b{
    void me(){
    cout<<"enter a number mechincal enginee";
    cout<<"enter marks";
    cin>>marks;
    cout<<"print marks"<<marks;

}

};
class d:public c{
    void cse(){
    cout<<"enter a number civil enginee";
    cout<<"enter marks";
    cin>>marks;
    cout<<"print marks"<<marks;

}

};

int main()
{
    d obj;
    obj.ce();
    obj.me();
    obj.cse();
    return 0;
}

