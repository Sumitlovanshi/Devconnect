#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int fruit[n+1]={0},price[n+1]={0};
		for(int i=1;i<n+1;i++){
			cin>>fruit[i];
		}
		for(int i=1;i<n+1;i++){
			cin>>price[i];
		}
		int a[m+1]={0};
		for(int i=1;i<n+1;i++){
			a[fruit[i]] += price[i];
		}
		int min=INT_MAX;
		
		for(int i=1;i<m+1;i++){
			if(min>a[i] && a[i]>0){
				min=a[i];
			}
		}
		cout<<min<<endl;
	}
	return 0;
}
