#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,n;
		cin>>a>>b>>n;
		for(int i=1;i<=n;i++){
			if(i&1){
				a=a*2;
			}
			else{
				b=b*2;
			}
		}
		if(a<b){
			cout<<b/a<<endl;
		}
		else{
			cout<<a/b<<endl;
		}
	}
	return 0;
}
