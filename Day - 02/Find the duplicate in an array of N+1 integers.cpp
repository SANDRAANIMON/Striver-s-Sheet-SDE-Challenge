/*CodeStudio solution*/
#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
  //Write your code here
int slow=arr[0], fast=arr[0];
do{
slow = arr[slow];
fast = arr[arr[fast]];
} while (sow != fast);

fast= arr[0];
while(slow != fast) {
slow = arr[slow];
fast = arr[fast];
}
return slow;

}

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};/*Leetcode solution*/

