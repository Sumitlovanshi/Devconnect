#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i=1;
		if(n>10){
			i=2;
		}
		for(;i<n;i++){
			for(int j=1;j<n;j++){
				if(i*j == n){
					cout<<i<<" "<<j<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
