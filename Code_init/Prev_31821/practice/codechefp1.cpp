#include<iostream>
using namespace std;
int main(){
	int z;
	cin>>z;
	while(z--){
		int n,k,x,y;
		int i=0,f=1;
		cin>>n>>k>>x>>y;
		for(;i<n;i++){
			x=(x+k)%n;
			if(x==y){
				cout<<"YES"<<endl;
				f--;
				break;
			}
		}
		if(f){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
