/*
Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.

Note:
Fibonacci series is the series of numbers where each number is obtained by adding two previous numbers. 
The first two numbers in the Fibonacci series are 0 and 1
*/

#include<iostream>
using namespace std;


bool checkMember(int n){
  if (n == 0 || n == 1) {
    return 1;
  }
  else{
    int a=0,b=1,c=0;
    while(b<=n){
      if(c==n){
        return 1;
      }
      c=a+b;
      a=b;
      b=c;
    }
  }
  return 0;
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
