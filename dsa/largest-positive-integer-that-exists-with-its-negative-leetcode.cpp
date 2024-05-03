// link : https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/
// type : EASY
// concept : Array, Two pointers
/*
notes: 
	abs(val) => will return a positive integer
*/

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int maximum = -1;
        while(i<j){
            if(nums[i]+nums[j]==0){
                maximum = max(maximum,max(nums[i], nums[j]));
                i++;j--;
            }
            else if(abs(nums[i])>abs(nums[j])){
                i++;
            } else {
                j--;
            }
        }
        return maximum;
    }
};
