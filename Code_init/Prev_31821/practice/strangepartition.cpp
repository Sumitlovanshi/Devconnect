#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,x,s1,s2=s1=0,k;
		cin>>n>>x;
		for(long long int i=0;i<n;i++){
			cin>>k;
			s1 += (k+x-1)/x;
			s2 += k;
		}
		cout<<(s2+x-1)/x<<" "<<s1<<endl;

	}
	return 0;
}


