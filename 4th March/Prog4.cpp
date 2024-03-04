/*
Print the following pattern

Pattern for N = 4

1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){

	int i,j,k,n;
	cin>>n;
	for(j=1;j<=n;j++){
		k=j;
		for(i=1;i<=j;i++){
			cout<<k;
			k++;
		}
		cout<<endl;
	}
  
}