#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int cnt=0,cnt1=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			if( (arr[i]&1) == (arr[i+1]&1) ){
				
			}
			else{
				arr[i+1]++;
				cnt++;
			}
		}
		for(int i=0;i<n-1;i++){
			if( (arr[i]&1) == (arr[i+1]&1) ){
				
			}
			else{
				arr[i]++;
				cnt1++;
			}
		}
		if(cnt<cnt1){
			cout<<cnt<<endl;
		}
		else{
			cout<<cnt1<<endl;
		}
//		cnt = min(cnt,cnt1);
//		cout<<cnt<<endl;
	}
	return 0;
}
