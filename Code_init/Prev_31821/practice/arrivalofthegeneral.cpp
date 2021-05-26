#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,swaps=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mx=0,mxi;
	for(int i=0;i<n;i++){
		if(arr[i] > mx){
			mx=arr[i];
			mxi=i;
		}
	}
	while(!(arr[0]==mx)){
		swap(arr[mxi],arr[mxi-1]);
		mxi--;
		swaps++;
	}
	int lo=1110,loi;
	for(int i=0;i<n;i++){
		if(arr[i] <= lo){
			lo=arr[i];
			loi=i;
		}
	}
	while(!(arr[n-1]==lo)){
		swap(arr[loi],arr[loi+1]);
		loi++;
		swaps++;
	}
	cout<<swaps<<endl;
	return 0;
}
