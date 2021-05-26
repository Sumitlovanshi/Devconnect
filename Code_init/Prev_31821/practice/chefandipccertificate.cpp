#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int count=0;
	while(n--){
		int arr[k+1];
		for(int i=0;i<k+1;i++){
			cin>>arr[i];
		}
		int sum=0,a;
		a=arr[k];
		sum=accumulate(arr,arr+k,sum);
		if(sum >= m && a<11){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
