//Write a C++ program that inputs a character from the user and checks whether it isavowel or consonent.

#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter the character"<<endl;
    cin>>c;

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"The character is vowel"<<endl;
    }
    else{
        cout<<"The character is consonent"<<endl;
    }
    return 0;   
}