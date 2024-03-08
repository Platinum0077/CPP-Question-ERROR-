/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, 
into their corresponding Celsius values and print the table
*/

#include<iostream>
using namespace std;


void printTable(int start, int end, int step) {
    //f-32*5/9=c
    for(int i = start; i<=end;i+=step ){
        cout << i << " "; 
        int c = (((i-32)*5)/9);
        cout << c<<endl;
    }
}



int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}
