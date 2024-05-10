// link : https://leetcode.com/problems/k-th-smallest-prime-fraction/
// type : MEDIUM
// concept : Arrray, Sorting




class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double,pair<int,int>>> v;
        int n = arr.size();
        for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                v.push_back({(double)arr[i]/(double)arr[j],{arr[i],arr[j]}});
             }
        }
        sort(v.begin(),v.end());
        int l = v.size();
        vector<int> result = {v[k-1].second.first,v[k-1].second.second};
        return result;
    }
};
