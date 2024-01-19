//Write a C++ program that inputs a character from the user and checks whether it isavowel or consonent.

#include<iostream>
using namespace std;

int main(){

    char c;
    cout<<"enter the any charcter";
    cin>>c;

    if(c=='a'||c=='e'||c=='o'||c=='u'||c=='i')
    {
        cout<<"the charcter is vowel";
    }
    else
    {
        cout<<"the charcter is consonent"; 
    }
}