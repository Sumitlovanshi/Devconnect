#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n==k){
			for(int i=1;i<=n;i++)
				cout<<i<<" ";
			cout<<endl;
			continue;
		}
		int arr[n+1]={0};
	//	int k2=k;
		for(int i=1;i<=n;i++){
			if(i&1){
				arr[i]=i;
			}
			else{
				arr[i]=i*(-1);
			}
		}
		int cnt=0,sum=0;
		for(int i=1;i<=n;i++){
			if((accumulate(arr,arr+i,sum))>0){
				cnt++;
			}
		}
		for(int i=1;i<=n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
		cout<<cnt<<endl;
/*		if(cnt==k){
		}
		else if(cnt>k){
			cnt=cnt-k;
			for(int i=n;i>0;i--){
				if(arr[i] && cnt){
					arr[i] *= (-1);
					cnt--;
				}
			}
		}
		else{
			cnt=k-cnt;
			for(int i=1;i<=n;i++){
				if((arr[i] < 0) && cnt){
					arr[i] *= (-1);
					cnt--;
				}
			}
		}
		for(int i=1;i<=n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;	
	*/
	}
	return 0;
}
