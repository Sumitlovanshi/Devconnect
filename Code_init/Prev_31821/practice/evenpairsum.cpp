#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a,b,count=0;
		cin>>a>>b;
		long long int evena,evenb,odda,oddb;
		evena = a/2;
		odda = a-evena;
		evenb = b/2;
		oddb = b-evenb;
		cout<<((evena*evenb)+(odda*oddb))<<endl;
	}
	return 0;
}
