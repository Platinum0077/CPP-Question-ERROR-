/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
*
**
***
****
*/

#include<iostream>
using namespace std;


int main(){

	int n , i , j;
    cout << "Enter n:" << endl;
	cin >> n;
	for( j = 1; j <= n ; j++ ){
		for( i = 1; i <= j ; i++){
			cout << "*";
		}
		cout << endl;
	}
  
}
