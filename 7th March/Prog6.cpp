/*
Print the following pattern for given number of rows.

Input format :

Line 1 : N (Total number of rows)
*/

#include<iostream>
using namespace std;


int main(){
  int n , i , j ;
  cin >> n;
  for (j=1;j<=n;j++){
    for (i=1;i<=n-j+1;i++){
      cout << i;
    }
    for (i=1;i<=(j-1)*2;i++){
      cout << "*";
    }
    for( i = n - j + 1; i >= 1 ; i--){
      cout << i;
    }
    cout << endl;
  }
}
