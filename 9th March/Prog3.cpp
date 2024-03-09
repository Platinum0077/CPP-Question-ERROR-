/*
You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'.



Your task is to write a function to search for 'target' in the array 'A'. 
If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int search(vector<int>& nums, int target) {

    int n = nums.size();
    int s = 0;
    int e = n-1;
    int m;
    while(s<=e){
        m = (e+s)/2;

        if(nums[m]==target){
            return m;
        }

        else if(nums[m]>target){
            e=m-1;
        }
        else if(nums[m]<target){
            s=m+1;
        }
    }
    return -1;
}


class Runner
{
    int t = 1;
    
    vector<int> v;
    int x;
    
public:
    void takeInput()
    {
        int n; cin >> n;
       
        v.assign(n, 0);
        for(int i = 0; i < n; ++i) cin >> v[i];
        cin >> x;
    }
    void execute()
    {
        vector<int> copy = v;
        search(copy, x);
    }

    void executeAndPrintOutput()
    {
        vector<int> copy = v;
        int ans = search(copy, x);
        cout << ans << '\n';
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}