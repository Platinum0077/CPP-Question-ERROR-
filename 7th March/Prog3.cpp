/*
Given a number N, find its square root. You need to find and print only the integral part of square root of N.

For eg. if number given is 18, answer is 4.
*/

#include<iostream>
using namespace std;

int main()
{
	int n , i , j , sq;
	cin >> n ;
	i = 1 ;
	sq = 1;
	while (sq <= n){
		i++;
		sq = i * i ;
	}
	cout << i - 1 ;
}

