#include<iostream>
using namespace std;
int main(){
	int deno[]={1,2,5,10,50,100};
	int t;
	cin>>t;
	while(t--){
		int n,ans=0;
		cin>>n;
		for(int i=5;i>=0;i--){
			ans += n/deno[i];
			n=n%deno[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
