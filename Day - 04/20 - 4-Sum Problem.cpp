/*CodeStudio solution*/

#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    unordered_map<int, pair<int, int>> seen;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int twoSum = arr[i] + arr[j];
            seen[twoSum] = {i, j};
        }
    }
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int left = target - (arr[i] + arr[j]);
            if(seen.find(left) != seen.end()) {
                pair<int, int> it = seen[left];
                    int front = it.first;
                    int back = it.second;               
                    if(i != front and i != back and j != front and j != back)
                        return "Yes";
            }
        }
    }
    return "No"; 
}


/*Leetcode Solution*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        
        if(nums.empty())
            return res;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-3; i++) {
            int target3 = target-nums[i];
            for(int j=i+1; j<n-2; j++) {
                int target2 = target3 - nums[j];
                int front = j+1;
                int back = n-1;
                
                while(front < back) {
                    int twoSum = nums[front] + nums[back];
                    if(twoSum < target2)
                        front++;
                    else if(twoSum > target2)
                        back--;
                    else {
                        vector<int> r(4, 0);
                        r[0] = nums[i];
                        r[1] = nums[j];
                        r[2] = nums[front];
                        r[3] = nums[back];
                        res.push_back(r);
                        
                        while(front < back and nums[front] == r[2])
                            front++;
                        while(front < back and nums[back] == r[3])
                            back--;
                    }
                }
                while(j+1 < n and nums[j+1] == nums[j])
                    j++;
            }
            while(i+1 < n and nums[i+1] == nums[i])
                i++;
        }
        return res;
    }
};
