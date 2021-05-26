#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k,d,sum=0,ans=0;
		cin>>n>>k>>d;
		int arr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum += arr[i];
		}
		
		if(sum<k){
			cout<<"0"<<endl;
		//	continue;
		}
		else if(sum  > k*d){
			cout<<d<<endl;
		//	continue;
		}
		else{
			ans = ceil(sum/k);
			cout<<ans<<endl;
		}
		
	}
	return 0;
}


