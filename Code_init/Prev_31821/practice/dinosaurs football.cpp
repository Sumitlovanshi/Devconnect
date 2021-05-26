#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n]={0};
		int a=n;
		arr[k]=n;
		n--;
		for(int i=k-1;i>=0;i--){
			arr[i]=n--;
		}
		for(int i=k+1;i<a;i++){
			arr[i]=n--;
		}
		for(int i=0;i<a;i++){
			cout<< arr[i] <<" ";
		}
		cout<<endl;
	}
	return 0;
}
