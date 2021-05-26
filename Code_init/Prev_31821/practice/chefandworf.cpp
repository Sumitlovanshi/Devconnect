#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;	
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int count=0;
		if(arr[0] > k){
			cout<<"-1"<<endl;
			continue;
		}
		int i=0,sum=0;
		while(i<n){
			if(sum > k){
				count++;
				i--;
			}
			sum += arr[i];
			i++;
		}
		count++;
		cout<<count<<endl;
	}
	return 0;
}
