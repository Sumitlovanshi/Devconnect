#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int flag=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n%2==0){
			cout<<"no"<<endl;
			continue;
		}
		int m=(n+1)/2;
		for(int i=1;i<=m;i++){
			if(arr[i-1]!=i){
				cout<<"no"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==1){
			continue;
		}
		int j=m-1;
		for(int i=m;i<n-1;i++){
			if(arr[i]!=j){
				cout<<"no"<<endl;
				break;
				flag=1;
			}
			j--;
		}
		if(flag==0){
			cout<<"yes"<<endl;
		}
	}
	return 0;
}
