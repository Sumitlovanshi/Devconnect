#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,b,m;
		cin>>n>>b>>m;
		long long k=0,time=0;
		while(n){
			if(n%2==0){
				k=n/2;
				time=time+(k*m);
				time=time+b;
				m=m*2;
				n=n-k;
			}
			else{
				k=(n+1)/2;
				time=time+(k*m);
				time=time+b;
				m=m*2;
				n=n-k;
			}
		}
		cout<<time-1<<endl;
	}
	return 0;
}
