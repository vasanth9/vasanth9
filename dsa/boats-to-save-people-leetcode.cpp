// link : https://leetcode.com/problems/boats-to-save-people/
// type : MEDIUM
// concept : Two Pointers, Sorting






class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size(),left=0,right=n-1,count=0;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                left++;
                right--;
            }else{
              right--;
            }
            count++;
        }
        return count;
    }
};
