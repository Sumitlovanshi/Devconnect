#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int arr2[101]={0};
		for(int i=0;i<n;i++){
			if(arr2[arr[i]]==0)
				arr2[arr[i]]=1;
		}
		int count=0;
		for(int i=0;i<101;i++){
			if(arr2[i]==1){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

