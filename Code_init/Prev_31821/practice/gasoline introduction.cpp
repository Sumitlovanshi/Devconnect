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
		int now=arr[0];
		int total=0;
		total=now;
		for(int i=1;i<n;i++){
			if(total>=arr[i])
			{
				now+=arr[i];
				total--;
				total+=arr[i];
				
			}
			else{
				break;
			}
		}
		cout<<now<<endl;
	}
	return 0;
}
