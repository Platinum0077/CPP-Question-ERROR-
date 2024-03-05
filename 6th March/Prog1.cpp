/*
Print the following pattern for the given N number of rows.

Pattern for N = 4

   1
  12
 123
1234

*/
#include<iostream>
using namespace std;


int main(){
	
	int n , i , j;
	cin>>n;
	for(j=1;j<=n;j++){
		for(i=1;i<=n-j;i++){
			cout<<" ";
		}
		for(i=1;i<=j;i++){
			cout<<i;
		}
		cout<<endl;
	}
}
