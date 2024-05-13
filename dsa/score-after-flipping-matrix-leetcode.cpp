// link : https://leetcode.com/problems/score-after-flipping-matrix/
// type : MEDIUM
// concept : Array, Matrix





class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                for(int j=0;j<n;j++){
                    grid[i][j] = !grid[i][j];
                }
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            int count = 0;
                for(int j=0;j<m;j++){
                    count+=grid[j][i];
                }
                if(count<=m/2){
                   for(int j=0;j<m;j++){
                    grid[j][i]=!grid[j][i];
                } 
                }
                int localSum = 0;
                for(int j=0;j<m;j++){
                   localSum += (grid[j][i]*pow(2,n-i-1));
                }
            ans+=localSum;
            //cout<<"localSum =" <<localSum<<"\n";
        }
        return ans;
    }
};
