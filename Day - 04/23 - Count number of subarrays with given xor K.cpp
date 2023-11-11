/*CodeStudio solution*/

#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    // Write your code here.
    map<int,int> mp;
    int xr =0 , count = 0;
    for(int i=0;i<arr.size();i++) {
        xr ^=arr[i];
        if(xr == x) 
            count++;
        if(mp.find(xr ^ x) != mp.end())
            count += mp[xr ^ x];
        mp[xr]++;
    }
    return count;
}


/*Interviewbit Solution*/

int Solution::solve(vector<int> &A, int B) {
    map<int,int> mp;
    int xr =0 , count = 0;
    for(int i=0;i<A.size();i++) {
        xr ^=A[i];
        if(xr == B) 
            count++;
        if(mp.find(xr ^ B) != mp.end())
            count += mp[xr ^ B];
        mp[xr]++;
    }
    return count;
}
