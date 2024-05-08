// link : https://leetcode.com/problems/relative-ranks/
// type : EASY
// concept : Array, Sorting

/*
notes: 
vector<pair<int,int>>newScore;
int n= score.size();
        for(int i=0;i<n;i++){
            newScore.push_back(make_pair(score[i],i));
        }
        sort(newScore.begin(),newScore.end(),greater());
sorting with index availability;
*/






class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>>newScore;
        int n= score.size();
        for(int i=0;i<n;i++){
            newScore.push_back(make_pair(score[i],i));
        }
        sort(newScore.begin(),newScore.end(),greater());
        vector<string> ans(n,"");
        for(int i=0;i<n;i++){
          
            if(i>2){
             ans[newScore[i].second]=to_string(i+1);
            } else if(i==1){
            ans[newScore[1].second]="Silver Medal";
            } else if(i==2){
            ans[newScore[2].second]="Bronze Medal";
            } else {
            ans[newScore[0].second]="Gold Medal";
            }
        }
        return ans;
    }
};
