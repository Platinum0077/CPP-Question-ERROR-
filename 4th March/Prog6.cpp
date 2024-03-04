/*
Print the following pattern

Pattern for N = 4

   *
  ***
 *****
*******

*/

#include<iostream>
using namespace std;


int main(){

	int i,j,n;
    cout << "Enter n"<< endl;
	cin>>n;
	for(j=1;j<=n;j++){
		for(i=1;i<=n-j;i++){
			cout<<" ";
		}
		for(i=1;i<=j*2 - 1;i++){
			cout<<"*";
		}
		cout<<endl;
	}
}