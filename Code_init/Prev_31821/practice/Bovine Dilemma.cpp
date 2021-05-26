#include<bits/stdc++.h>
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
		int res=0;
		set<int> s;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				res=arr[j]-arr[i];
				s.insert(res);
			}
		}
		cout<<(int)s.size()<<endl;
	}
	return 0;
}
