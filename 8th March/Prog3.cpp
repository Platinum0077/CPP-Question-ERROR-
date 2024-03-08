/*
Given an array of length N, you need to find and print the sum of all elements of the array.

Constrains:
1 <= N <=10^6
*/

#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    cout <<sum;
}

