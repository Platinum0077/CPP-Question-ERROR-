/*
Print the following pattern for the given number of rows.

Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines
*/

#include<iostream>
using namespace std;

int main()
{
  int n , i , j ;
  cin >> n;
  for(j=1;j<=n;j++){
    for(i=1;i<=n-j;i++){
      cout << " ";
    }
    for(i=j;i>=1;i--){
      cout << i;
    }
    for(i=2;i<=j;i++){
      cout << i;
    }
    cout << endl;
  }
}
