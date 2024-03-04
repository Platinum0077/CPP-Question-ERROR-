/*
Given a number N, print sum of all even numbers from 1 to N.
*/
#include<iostream>
using namespace std;


int main(){

	int n,i,sum;
	cin>>n;
	i=0,sum=0;
	while(i<=n){
		sum+=i;
        i+=2;
	}
	cout<<sum;
}