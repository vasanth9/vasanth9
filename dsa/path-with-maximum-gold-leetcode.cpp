// link : https://leetcode.com/problems/path-with-maximum-gold/
// type : MEDIUM
// concept : DFS




int m=0;
int n=0;
class Solution {
public:
    int helper(int row,int col,vector<vector<int>>& grid){
        if(row<0 || row>=m ||col <0 || col>=n||grid[row][col]==0) return 0;
        int temp = grid[row][col];
        grid[row][col]=0;
        int left = helper(row,col-1,grid);
        int right = helper(row,col+1,grid);
        int up = helper(row+1,col,grid);
        int down = helper(row-1,col,grid);
        grid[row][col]=temp;
        return temp+max({left,right,up,down});
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int ans =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans = max(ans,helper(i,j,grid));
            }
        }
        return ans;
    }
};
