/*
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
*/

#include<iostream>
using namespace std;

#include<iostream> 
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    int temp = n, revNum = 0; 
    while(temp > 0) { 
        int lastDigit = temp % 10; 
        temp = temp / 10; 
        revNum = revNum * 10 + lastDigit; 
    } 
    cout << revNum;
}
