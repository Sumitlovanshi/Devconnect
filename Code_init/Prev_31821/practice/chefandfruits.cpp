#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k,x;
		cin>>n>>m>>k;
		if(n<m){
			x=m-n;
		}
		else{
			x=n-m;
		}
		if(x<k){
			cout<<"0"<<endl;
		}
		else{
			k=x-k;
			cout<<k<<endl;
		}
	}
	return 0;
}
