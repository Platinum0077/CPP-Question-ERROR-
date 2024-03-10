/*
You have been given a random integer array/list(ARR) of size N. 
You are required to find and return the second largest element present in the array/list.
*/


#include <iostream>
#include<climits>

using namespace std;


int findSecondLargest(int arr[], int n)
{
    int m = INT_MIN;
    int sm = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>=m){
            sm = m;
            m = arr[i];
        }
        else if(arr[i]<m && arr[i]>=sm){
            sm = arr[i];
        }

    }
    return sm;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}

