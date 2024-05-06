// link : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A
// type : EASY
// concept : Array

// Find-maximum-in-an-Array


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        int maximum = 0;
        while(n--){
            cin>>k;
            if(k>maximum){
                maximum = k;
            }
        }
        cout<<maximum<<"\n";
    }
}

