// link : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT
// type : EASY
// concept : Array 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum = x;
        int arraySum = accumulate(a,a+n,0);
        for(int i=0;i<n;i++){
            if(a[i]>y){
                sum+=(a[i]-y);
            }
        }
        sum<arraySum ? cout<<"COUPON\n" : cout<<"NO COUPON\n";
        // your code goes here
    }

}

