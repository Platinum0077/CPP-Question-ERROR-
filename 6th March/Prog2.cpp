/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
333
22
1

*/
#include<iostream>
using namespace std;


int main(){

	int n , j , i ;
	cin >> n;
	for(j=1;j<=n;j++){
		for(i=1;i<=n-j+1;i++){
			cout<<n-j+1;
		}
		cout<<endl;
	}

}