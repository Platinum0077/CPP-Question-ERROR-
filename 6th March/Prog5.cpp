/*
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

"Indexing is start from 1"

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int i , j , n ,a,temp, fib ;
        cin >> n;
        a = 0 , fib = 1;
        for(i=1;i<=n;i++){
                temp = fib;
                fib+=a;
                a=temp;
        }
        cout<<a;
}
