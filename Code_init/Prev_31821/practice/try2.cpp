#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> arr, arr1;
		int a1=0,a2=0,cnt=0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			arr.push_back(num);
			a1 += arr[i];
		}
		for(int i=0;i<m;i++){
			int num;
			cin>>num;
			arr1.push_back(num);
			a2 += arr1[i];
		}
		sort(arr.begin(),arr.end());
		sort(arr1.begin(),arr1.end());
		for(int i=0 , j=m-1 ; i<n  ; i++,j--){
			if(a1 >a2){
				break;
			}
			cnt++;
			a1 -= arr[i];
			a1 += arr1[j];
			a2 -= arr1[j];
			a2 += arr[i];
		}
		if(a1>a2){
			cout<<cnt<<endl;
		}	
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}


