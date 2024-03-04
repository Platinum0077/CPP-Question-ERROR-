/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;


int main(){

	int n , j , i ;
	cin >> n;
	for( j=1;j<=n;j++){
		for(i=j;i>=1;i--){
			cout << i;
		}
		cout<<endl;
    } 
}