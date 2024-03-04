/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
1
22
333
4444
*/
#include<iostream>
using namespace std;


int main(){

    
	int n , i , j ;
	cin >> n;
	for ( j = 1; j<=n; j++ ){
		for( i = 1; i<=j ; i++){
			cout << j;
		}
		cout << endl;
	}
}