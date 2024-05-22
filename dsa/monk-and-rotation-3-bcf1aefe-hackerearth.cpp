// link : https://www.hackerearth.com/problem/algorithm/monk-and-rotation-3-bcf1aefe/
// type : EASY
// concept : Array 



#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		k=k%n;
		k=n-k;
		
         for(int i=k;i<n;i++){
			cout<<a[i]<<" ";
			} 
			for(int i=0;i<k;i++){
			cout<<a[i]<<" ";
			}
		cout<<"\n";
	}
}
