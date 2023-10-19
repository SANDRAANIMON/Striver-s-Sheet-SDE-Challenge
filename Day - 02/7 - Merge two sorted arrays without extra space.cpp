/*CodeStudio solution*/

#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    // Write your code here.
    int l=m-1, r=n-1, k=m+n-1;
    while(l>=0 and r>=0) {
        if(arr1[l] > arr2[r])
            arr1[k--] = arr1[l--];
        else
            arr1[k--] = arr2[r--];
    }
    while(l>=0)
        arr1[k--] = arr1[l--];
    while(r>=0)
        arr1[k--] = arr2[r--];
    return arr1;
}

/*Leetcode solution*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=m-1, r=n-1, k=m+n-1;
        while(l>=0 and r>=0) {
            if(nums1[l] > nums2[r])
                nums1[k--] = nums1[l--];
            else
                nums1[k--] = nums2[r--];
        }
        while(l>=0)
            nums1[k--] = nums1[l--];
        while(r>=0)
            nums1[k--] = nums2[r--];
    }
};
