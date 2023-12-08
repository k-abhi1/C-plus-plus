#include<iostream>
using namespace std;

class animal
{
    public:
   virtual void sound()=0;

   void eat()
   {

    cout<<"animal eating"<<endl;
   }
 
};
class dog: public animal
{
    public:
    void sound()
    {
        cout<<"wo...wo.."<<endl;
    }

};

int main()
{
    dog obj;
    obj.sound();
    obj.eat();


}