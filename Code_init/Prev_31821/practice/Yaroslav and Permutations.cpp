#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin>>n;	
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int fr[1005]={0};
		for(int i=0;i<n;i++){
			fr[arr[i]]++;
		}
		int max=0;
		for(int i=0;i<1005;i++){
			if(fr[i] > max){
				max=fr[i];
			}
		}
		if(n==1){
			cout<<"YES"<<endl;
		}
		else if(max <= ((n+1)/2)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	return 0;
}
