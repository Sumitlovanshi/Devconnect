#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int l,r,count=0;
		//cin>>l>>r;
		scanf("%lld%lld",&l,&r);
		if(!(l&1) && !(r&1)){
			count=(r-l)/2;
		}
		else{
			count=((r-l)/2)+1;
		}
		if(count&1){
			printf("Odd\n");
			//cout<<"Odd"<<endl;
		}
		else{
			printf("Even\n");
			//cout<<"Even"<<endl;
		}
	}
	return 0;
}
