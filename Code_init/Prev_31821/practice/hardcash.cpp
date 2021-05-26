#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,sum=0;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i< n;i++){
			cin>>arr[i];
			sum=sum+arr[i];
		}
		cout<<sum%k<<endl;
	}
	return 0;
}
