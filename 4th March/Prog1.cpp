/*
Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.



1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.
*/
#include <iostream>
using namespace std;

int main(){
    int a;
    char c;
    cout<<"enter a character"<<endl;
    cin>>c;
    a=c;

    if (a>=65 && a<=90){
        cout<<"1"<<endl;
    }
    else if(a>=97&&a<=122){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}