/*
Given a binary number as an integer N, convert it into decimal and print
*/

#include<iostream>
using namespace std;

int main()
{
	int n , i , ans , j , a ;
	cin >> n ;
	i = n;
	ans = 0;
	j = 1;
	while( i > 0 ){
		a = i % 10 ;
		i = i / 10 ;
		ans = ans + ( j * a);
		j = j * 2;
	}
	cout << ans;
}
