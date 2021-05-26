#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cin>>m;
		int arr2[m];
		for(int i=0;i<m;i++){
			cin>>arr2[i];
		}
		int j=0,count=0;
		for(int i=0;i<n;i++){
			if(arr[i]==arr2[j]){
				j++;
				count++;
			}
		}
		if(count==m){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
