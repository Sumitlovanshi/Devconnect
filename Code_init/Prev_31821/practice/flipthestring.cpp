#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int n,count=0;
		n=a.size();
		for(int i=0;i<n;i++){
			if(a[i]== b[i]){
				continue;
			}
			else{
					count++;
					int p=i;
					while((a[p] != b[p] ) && (p<n)){
						a[p]=b[p];
						p=p+2;
					}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
