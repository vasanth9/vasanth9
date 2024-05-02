// link : https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
// type : EASY
// concept : Array, Hashing,
/*
  notes:
	vector<int> v(n) => creates a vector of size n with default values as 0.
        v.size() => gives the size of the array.
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[arr[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(v[i]>1)
            ans.push_back(i);
        }
        if(ans.size()==0){
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
