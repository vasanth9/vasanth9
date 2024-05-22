// link : https://www.hackerearth.com/problem/algorithm/monk-and-inversions-arrays-strings-e5aaa427/
// type : EASY
// concept : Matrix



#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int m[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>m[i][j];
			}
		}
		int count =0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int k=i;k<n;k++){
					for(int l=j;l<n;l++){
						if(m[k][l]<m[i][j])count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
}
