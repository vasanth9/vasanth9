// link : https://leetcode.com/problems/maximize-happiness-of-selected-children/
// type : MEDIUM
// concept : Arrays, Sorting





class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        sort(happiness.begin(),happiness.end(),greater());
        long long sum =0;
        int n = happiness.size();
        for(int i=0;i<k;i++){
            int x= max(0,happiness[i]-i);
            sum+=x;
        }
        return sum;
    }
};
