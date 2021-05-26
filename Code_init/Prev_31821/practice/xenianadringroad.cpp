#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[m];
	long long int time=0,curr=1;
	
	for(int i=0;i<m;i++)cin>>arr[i];
	for(int i=0;i<m;i++){
		if( curr <= arr[i]){
			time += arr[i]-curr;
			curr=arr[i];
		}
		else{
			time += n-curr;
			time += arr[i];
			curr=arr[i];
		}
	}
	cout<<time<<endl;
	return 0;
}
