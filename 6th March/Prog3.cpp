/*
Print the following pattern for the given number of rows.

Pattern for N = 4
   1
  232
 34543
4567654

*/
#include <iostream> 
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    int currRow = 1; 
    while(currRow <= n){ 
        int spaces = 1; 
        while(spaces <= n - currRow) { 
            cout << " "; 
            spaces = spaces + 1; 
        } 
        int currCol = 1; 
        int val = currRow; 
        while(currCol <= currRow) { 
            cout << val; 
            val = val+1; 
            currCol = currCol + 1; 
        } 
        val = 2 * (currRow - 1); 
        while(val >= currRow) { 
            cout << val; 
            val = val - 1; 
        } 
        cout << endl; 
        currRow = currRow + 1; 
    } 
}
