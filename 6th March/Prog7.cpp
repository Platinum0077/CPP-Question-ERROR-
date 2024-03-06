/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.

Print count of characters, count of digits and count of white spaces respectively (separated by space).
*/

#include<iostream> 
using namespace std; 
int main() { 
    char ch; 
    ch = cin.get(); 
    int digits = 0, spaces = 0, characters = 0; 
    while(ch != '$') { 
        if(ch >= 'a' && ch <= 'z') { 
            characters = characters+1; 
        } 
        else if(ch >= '0' && ch <= '9') { 
            digits= digits+1; 
        } 
        else if(ch == ' ' || ch == '\t' || ch == '\n') {
            spaces = spaces+1; 
        } 
        ch = cin.get(); 
    } 
    cout << characters << " " << digits << " " << spaces; 
}
