#include<iostream>
using namespace std;

class stack{
    private:
    int *arr;
    int capicty;
    int top;
    public:
    stack(int c){
        this->capicty =c;
    arr=new int[c];
    this-> top= -1;
    }
  void push(int data ){
        if(this->top==this->capicty-1){
            cout<<"overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top]=data;

    }
};

int main(){
    stack s(5);
    s.push(10);
    s.push(20);


    return 0;

}