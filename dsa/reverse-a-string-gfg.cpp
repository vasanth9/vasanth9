// link : https://www.geeksforgeeks.org/problems/reverse-a-string/1
// type : EASY
// concept : String, Array

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
       string rev = "";
       int n = str.length();
       for(int i=n-1;i>=0;i--){
           rev+=str[i];
       }
       return rev;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends
