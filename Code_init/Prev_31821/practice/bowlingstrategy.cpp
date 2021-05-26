#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,l;
		cin>>n>>k>>l;
		if(k*l > n){
			int j=1;
			for(int i=0;i<n;i++){
				if(j>k){
					j=1;
				}
				cout<<j<<' ';
				j++;
			}
			cout<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
