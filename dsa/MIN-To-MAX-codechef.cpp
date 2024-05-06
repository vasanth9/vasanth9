// link : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN
// type : EASY
// concept : Array 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int minimum =*min_element(a, a + n);
        int count =n;
        for(int i=0;i<n;i++){
            if(a[i]==minimum)
             count--;
        }
        cout<<count<<"\n";
        // your code goes here
    }

}

