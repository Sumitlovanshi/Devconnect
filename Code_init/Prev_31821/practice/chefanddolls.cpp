#include<iostream>
define max 100001
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		int arr[max]={0};
		for(int i=0;i<n;i++)
		{
			cin>>m;
			arr[m]++;
		}
		for(int i=0;i<max;i++){
			if(arr[i]==1){
				cout<<i<<endl;
			}
		}
	}
		return 0;
}
