// link : https://leetcode.com/problems/minimum-cost-to-hire-k-workers/
// type : HARD
// concept : Priority Queue, Sort





class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
         double totalCost = numeric_limits<double>::max();
        vector<pair<double, int>>v;
        for(int i=0;i<n;i++){
            v.push_back({(double)wage[i]/quality[i],quality[i]});
        }
        sort(v.begin(),v.end());
        priority_queue<int> hqWorkers;
        int cq = 0;
        for(int i=0;i<n;i++){
            hqWorkers.push(v[i].second);
            cq+=v[i].second;
            if(hqWorkers.size()>k){
                cq-=hqWorkers.top();
                hqWorkers.pop();
            }
            if(hqWorkers.size()==k){
                totalCost = min(totalCost, cq*v[i].first);
            }
        }
        return totalCost;

    }
};
