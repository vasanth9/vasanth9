// link : https://leetcode.com/problems/largest-local-values-in-a-matrix/
// type : EASY
// concept : Array, Matrix


class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            vector<int>local;
            for(int j=0;j<n-2;j++){
                int maxi = 0;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        maxi = max(maxi,grid[k][l]);
                    }
                }
                local.push_back(maxi);
            }
            ans[i]=local;
        }
        return ans;
    }
};
