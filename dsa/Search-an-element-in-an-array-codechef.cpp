// link : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR
// type : EASY
// concept : Array 




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k,a;
    cin>>n>>k;
    bool search = false;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==k){
            search =true;
        }
    }
    search ? cout<<"YES":cout<<"NO";
}

