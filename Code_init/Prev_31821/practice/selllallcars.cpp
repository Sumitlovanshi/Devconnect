#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		reverse(arr,arr+n);
		long long int sum=0;
		for(int i=0;i<n;i++){
			arr[i] -= i;
			if(arr[i] < 1){
				sum += 0;
			}
			else
				sum += arr[i];
		}
		sum = sum%1000000007; 
		cout<<sum<<endl;
	}
	return 0;
}
