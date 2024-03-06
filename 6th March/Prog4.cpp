/*
Print the following pattern for the given number of rows.

Note: N is always odd.

Pattern for N = 5
  *
 ***
*****
 ***
  *
*/
#include<iostream>
using namespace std;


int main() {
    
    int n , j , i , a , b ;
	cin>> n;
    a=(n+1)/2;
    b=(n-1)/2;
	for ( j=1;j<=a ; j++){
		for(i=1;i<=a-j;i++){
			cout<<" ";
		}
        for(i=1;i<=2*j-1;i++){
            cout << "*";
        }
        cout<<endl;
	}
    for(j=b;j>=1;j--){
        for(i=1;i<=b-j+1;i++){
            cout<<" ";
        }
        for(i=1;i<=2*j-1;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
