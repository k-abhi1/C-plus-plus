#include<iostream>
using namespace std;

class person
{
private:
int run;
string sms;

 public:
 void play()
 {
    run=50;
    cout<<"today run i second"<<run<<"run"<<endl;
 }
    void weelk()
    {
        sms="today i walked 3m kilometers";
        cout<<sms;
    }

};

int main()
{
   person obj;
   obj.play();
   obj.weelk();


} 