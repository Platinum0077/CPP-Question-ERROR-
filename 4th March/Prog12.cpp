/*
Print the following pattern for the given number of rows.

Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;


int main(){
    
    
    int i , j , n ;
    cin >> n;
    for(j=1;j<=n;j++){
        for(i=1;i<=j;i++){        
            char c ='A'+n-j+i-1;
            cout<<c;
        }
        cout<<endl;
    }
}