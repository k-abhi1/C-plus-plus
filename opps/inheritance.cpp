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


 #include<iostream>
 using namespace std;

 class Add
 {
    protected:
    int a,b;
    public:
    void input()
    {
        cout<<"enter the two number...............";
        cin>>a>>b;
    }
    class b: public a
    {   int c;
        public:
        void add()
        {
            c=a+b;
            cout<<"addction"<<c<<endl;

        }
        void sub()
        {
            c=a-b;
            cout<<"subtrection"<<c<<endl;
        }

    };
    class c:public b
    {   int c;
        public:

        void malti()
        {
             
            c=a*b;
            cout<<"malti"<<c<<endl;
        }

        void div()
        {
             
            c=a/b;
            cout<<"division"<<c<<endl;    // TODO  FIX ME IN ERROR
        }
        }


    };

    int main()
    {
        Add obj;
        obj.add();
        obj.sub();
        obj.sub();
        obj.malti();
        obj.div();


    }


    
