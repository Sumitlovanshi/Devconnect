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
		int mx=*max_element(arr,arr+n);
		int fr[mx]={0};
		for(int i=0;i<n;i++){
			fr[arr[i]]++;
		}
		sort(fr,fr+mx);
		int mxoffr=*max_element(fr,fr+mx);
		int finalfr[mx]={111111};
		for(int i=0;i<mx;i++){
			if(fr[i]==mxoffr){
				finalfr[i]=i;
			}
		}
		cout<<*min_element(finalfr,finalfr+mx)<<endl;
	}
	return 0;
}

