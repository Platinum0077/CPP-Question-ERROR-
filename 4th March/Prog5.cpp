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

	int n;
	cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;
	int val = 1;
	while (i <= n) {
		int k = 1;
		while (k <= n - i) {
			cout << " ";
			k = k + 1;
		}
		val = i;
		int j = 1;
		while (j <= i) {
			cout << val;
			j = j + 1;
			val = val + 1;
		}
		cout << endl;
		i = i + 1;



        /*
        ALTERNATE CODE
        
        int i,j,k,n;
        cin>>n;
	    for(j=1;j<=n;j++){
		    k=j;
		    for(i=1;i<=n-j;i++){
			    cout<<" ";
		    }
		    for(i=1;i<=j;i++){
			    cout<<k;
			    k++;
		    }
		    cout<<endl;
	    }
        */
	}
}