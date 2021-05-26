#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int flag=0;
		cin>>n;
		int m=n/2;
		int arr[m+1];
		for(int i=0;i<=m;i++){
			cin>>arr[i];
			if(i==m){
				if(arr[m]!=i+1){
					flag=1;
				}
			}
		}
	
		int a=0;
		for(int i=m-1;i>=0;i--){
			cin>>m;
			arr[i]=arr[i]-m;
		}
		for(int i=0;i<m;i++){
			if(arr[i]!=0){
				cout<<"no"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<"yes"<<endl;
		}
	}
		return 0;
	}
